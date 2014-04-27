extern int CHARADELI_STATUS_NOVISIT;
extern int CHARADELI_STATUS_READY;
extern int CHARADELI_STATUS_VISITING;

void CharaDeli_init();

int CharaDeli_newSession();
void CharaDeli_destroySession(int sid);
void CharaDeli_setDefaultSessionID(int sid);

int CharaDeli_editMessage(int sid);

void CharaDeli_setSendTo(int sid, string to);
string CharaDeli_getSendTo(int sid);
void CharaDeli_setSendDataName(int sid, string dataname);
void CharaDeli_addSendMessageHeader(int sid, string key, string value);
void CharaDeli_setSendMessageBody(int sid, string message);

int CharaDeli_ready(int sid);
boolean CharaDeli_isReady(int sid);

int CharaDeli_doVisit(int sid);

int CharaDeli_getStatus(int sid);
boolean CharaDeli_isReturned(int sid);
void CharaDeli_forceReturn(int sid);

int CharaDeli_showReplyMessage(int sid);
