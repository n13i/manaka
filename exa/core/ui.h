extern string UI_PREF_TYPE_CHECKBOX;
extern string UI_PREF_TYPE_SELECT;
extern string UI_PREF_TYPE_INPUT;
extern string UI_PREF_TYPE_PASSWORD;

int UI_prefDialog(string title, string pref[][], string ret[]);
int UI_prefDialogW(string winname, string title, string pref[][], string ret[]);
void UI_prefCreateItem(string pref[][], int index, string id,
					   string type, string descr, string help,
					   string options, string defvalue);
string UI_prefGetID(string pref[][], int index);

int UI_listBox(string items[], int selected, int height, boolean cancelable);
int UI_listBoxW(string winname, string items[], int selected,
				int height, boolean cancelable);

void UI_showTitle(string title);
void UI_showTitleW(string winname, string title);

string UI_getHorizontalLine();
string UI_getHorizontalLineW(string winname);
