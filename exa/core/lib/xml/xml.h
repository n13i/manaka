// -*- aya -*-
/**
 * @defgroup XML XML ä÷êî
 * @{
 */
/**
 * @file
 *
 * @author  n13i <n13i@m2hq.net>
 * @version 0.5.1
 *
 * @date    2005/01/24 çÏê¨
 */

extern int XML_NODE_DOCUMENT;
extern int XML_NODE_PI;
extern int XML_NODE_ELEMENT;
extern int XML_NODE_ATTRIBUTE;
extern int XML_NODE_TEXT;
extern int XML_NODE_CDATA;

extern int XML_EVENT_ENDELEMENT;


extern int XML_OK;
extern int XML_ERROR_DBINIT;
extern int XML_ERROR_IO;
extern int XML_ERROR_INVALIDHANDLE;
extern int XML_ERROR_PARSE;


void XML_setTemporaryDir(string dir);
string XML_getVersion();

void XML_setDBDebugMode(boolean debug);

int XML_new();
boolean XML_destroy(int xml_handle);

int XML_parseFromFile(int xml_handle, string filename, boolean convert_encoding);
int XML_parse(int xml_handle, string xml, boolean convert_encoding);
int XML_getErrorLine(int xml_handle);

int XML_readNextNode(int xml_handle);
int XML_getNode(int xml_handle, string &path, string &data, string attr[][]);
string XML_getAttribute(string attr[][], string name);
string XML_getNodePath(int xml_handle);

string XML_getNodeTypeAsString(int type);

/* @} */
