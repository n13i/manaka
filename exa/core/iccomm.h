extern int ICCOMM_SEND_ASYNC;
extern int ICCOMM_SEND_SYNC;


int ICComm_sendMessage(string id, string persona, string message, int sync);
boolean ICComm_isNewMessageArrived();
boolean ICComm_messageExists();
boolean ICComm_getMessage(int time, string &pid, string &persona, string &message);
void ICComm_deleteMessage(int time);
int ICComm_enumMessageReceivedTime(int count);
void ICComm_cleanupMessages();
int ICComm_getMatchingMessages(string pid_pattern, string persona_pattern, string message_pattern, string messages[][]);
