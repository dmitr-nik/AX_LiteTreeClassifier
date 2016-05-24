public void init()
{
    // <GEEU>
    this.raiseEvent_W(methodstr(FormRunListener_W, beforeInit));
    // </GEEU>

    super();
    SysSecurityFormSetup::loadSecurity(this);
    this.dimensionFieldCtrls();
    this.inventStorageDimFieldCtrls();

    if (this.isWorkflowEnabled())

    {
        workflowControls = SysWorkflowFormControls::construct(this);
        workflowControls.initControls();
    }
    //ltc, LiteTreeClassifier, don -->
    if(ltcFormSetup::find(this.name())
        && this.dataSourceCount()
        && (! this.args() || this.args().name()))
    {
        formMethodHandler = new ltcFormMethodHandler(this);
        formMethodHandler.init();
    }
    //ltc, LiteTreeClassifier, don <--
    // <GEEU>
    this.raiseEvent_W(methodstr(FormRunListener_W, afterInit));
    // </GEEU>

}
