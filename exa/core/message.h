void Message_new();
void Message_newFromString(string message);
string Message_getAll();
string Message_getHeader(string key);
string Message_getBody();
void Message_addHeader(string key, string value);
void Message_setBody(string message);
void Message_addQuote();
string Message_formatTime(int time);
