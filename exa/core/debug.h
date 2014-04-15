extern int DEBUG_LV_FATAL;
extern int DEBUG_LV_ERROR;
extern int DEBUG_LV_WARN;
extern int DEBUG_LV_INFO;
extern int DEBUG_LV_DEBUG;
extern int DEBUG_LV_TRACE;

void Debug_init();
int Debug_openWindow();
int Debug_closeWindow();
void Debug_registerLogDomain(string domain);

// �v���v���Z�b�T�����p�\�ȏꍇ
//#define Debug(level, module, message) _Debug(level, __FILE__, __LINE__, "", module, message)
// ���p�ł��Ȃ��ꍇ
void Debug(int level, string module, string message);

void _Debug(int level, string file, int line, string func,
			string module, string message);
