class ShortcutColumn():
    def __init__(self,name=("ShortcutCol",1),condP = None, rebP = None, LKey = None, HKey = None):
        self.condP = condP
        self.rebP = rebP
        self.LKey = LKey
        self.HKey = HKey
        self.name = name[0]
        self.OM_data_eqn = ''
        self.OM_data_init = ''
        self.InputStms = None
        self.OutputStms = None
        self.EngStms = None
        self.count = name[1]
        self.thermoPackage =None
        self.type = 'ShortcutColumn'


    def connect(self,distillate = None, bottoms = None, feed = None, condenser_duty=None, reboiler_duty = None):
        self.distillate = distillate
        self.bottoms = bottoms
        self.feed = feed
        self.conderser_duty = condenser_duty
        self.conderser_duty = reboiler_duty

    def OM_Flowsheet_Init(self, addedcomp):
        self.OM_data_init = ''
        self.OM_data_init = self.OM_data_init + ("model sc"+str(self.count)+"\n")
        self.OM_data_init = self.OM_data_init + ("extends Simulator.Unit_Operations.Shortcut_Column;;\n" )
        self.OM_data_init = self.OM_data_init + ("extends Simulator.Files.Thermodynamic_Packages."+self.thermoPackage+";\n")
        self.OM_data_init = self.OM_data_init + ("end sc"+str(self.count)+";\n")
        comp_count = len(addedcomp)
        self.OM_data_init = self.OM_data_init + 
        str(self.count)+ " " + self.name + "(NOC = " + str(comp_count)
        self.OM_data_init = self.OM_data_init + (",comp = {")
        comp = str(addedcomp).strip('[').strip(']')
        comp = comp.replace("'", "")
        self.OM_data_init = self.OM_data_init + comp + ("},")
        self.OM_data_init = self.OM_data_init + 'condP = ' + str(self.condP) +','
        self.OM_data_init = self.OM_data_init + 'rebP = ' + str(self.rebP) + ','
        self.OM_data_init = self.OM_data_init + 'mixMolFrac[2, shortcutrev11.LKey] = ' + str(self.LKey) + ','
        self.OM_data_init = self.OM_data_init + 'mixMolFrac[2, shortcutrev11.HKey] = ' + str(self.HKey) + ','
        self.OM_data_init = self.OM_data_init + 'actR = ' + str(self.actR) + ');\n'
        return self.OM_data_init

    def OM_Flowsheet_Eqn(self, addedcomp):
        self.OM_data_eqn = ''
        # self.OM_data_eqn = self.name + '.pressDrop = ' + str(self.PressDrop) + ';\n'
        self.OM_data_eqn = self.OM_data_eqn + ('connect(' + self.condenser_duty.name + '.inlet,' +  self.name + '.condenser_duty' + ');\n')
        self.OM_data_eqn = self.OM_data_eqn + ('connect(' + self.name + '.reboiler_duty,' + self.reboiler_duty.name + '.outlet);\n')
        self.OM_data_eqn = self.OM_data_eqn + ('connect(' + self.name + '.bottoms,' + self.bottoms.name + '.inlet);\n')
        self.OM_data_eqn = self.OM_data_eqn + ('connect(' + self.name + '.distillate,' + self.distillate.name + '.inlet);\n')
        self.OM_data_eqn = self.OM_data_eqn + ('connect(' + self.name + '.feed,' + self.feed.name + '.outlet);\n')
        return self.OM_data_eqn