extern string SPR_ERROR;


int    SPR_init();
void   SPR_destroy();

int    SPR_load(string location);
int    SPR_reload();

int    SPR_run(string section, string option_expr);
string SPR_getText(string section, string option_expr);

string SPR_getOptionMatched(string section, string option_expr);
int    SPR_getOptions(string section, string options[]);
int    SPR_getLastCalled(string section, string option);

