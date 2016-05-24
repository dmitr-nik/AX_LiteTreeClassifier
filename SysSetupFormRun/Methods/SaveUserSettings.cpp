public void saveUserSetting()
{
    SysSaveSetup    sysSaveSetup = SysSaveSetup::construct(this);
    ;
    sysSaveSetup.saveFormSetup();
    super();

    //ltc, LiteTreeClassifier, don -->
    if (formMethodHandler)
    {
        formMethodHandler.saveLast();
    }
    //ltc, LiteTreeClassifier, don <--
}