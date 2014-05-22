void    Prop_init();
void    Prop_deletePrivateTree();

boolean Prop_migrateFromV2();

string  Prop_getPrivate(string key);
void    Prop_setPrivate(string key, string value);

string  Prop_getUserName();
void    Prop_setUserName(string username);
string  Prop_getUserNamePropertyKey();
void    Prop_setFirstBootTime(int time);
int     Prop_getFirstBootTime();
void    Prop_setLastBootTime(int time);
int     Prop_getLastBootTime();
void    Prop_setShutdownTime(int time);
int     Prop_getShutdownTime();
void    Prop_setLastUpdatedTime(int time);
int     Prop_getLastUpdatedTime();
void    Prop_setAutoPsnUpdateEnabled(boolean enable);
boolean Prop_getAutoPsnUpdateEnabled();
