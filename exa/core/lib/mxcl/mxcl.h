int     MXCL_getOwnVendorAndType(string& vendor, string& type);
int     MXCL_getInstalledCharacters(string characters[]);
int     MXCL_makePropertyTree(string tree);
void    MXCL_arrayGetSortedIndexInt(int target[], int index[]);
string  MXCL_strRepeat(string str, int times);
string  MXCL_strExcludeTags(string str);
boolean MXCL_strHasMultiByteChar(string str);
int     MXCL_updatePsnFile();
int     MXCL_checkUpdate(string feturl);
string  MXCL_getFileContent(string filename);
double  MXCL_getMoonAge(int time);
int     MXCL_getMemberStates(string members[][], boolean only_online, boolean exclude_me);
string  MXCL_getMemberNameFromPID(string pid);
