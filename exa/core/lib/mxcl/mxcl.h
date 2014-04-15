// -*- aya -*-
/**
 * @author  n13i <n13i@m2hq.net>
 * @version 0.1.2
 *
 * @date 2006/02/21 作成
 * @date 2006/02/22 prefix MXCL_ 付加
 * @date 2006/03/05 関数追加・関数名変更
 * @date 2006/03/13 関数追加
 * @date 2006/07/13 関数追加
 * @date 2006/07/19 関数追加
 * @date 2006/07/25 関数追加
 * @date 2006/11/25 関数追加
 * @date 2006/12/10 関数追加
 *
 * @file
 *
 * @defgroup libmxcl mxproject 共通キャラクタライブラリ
 * @{
 */

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

/* @} */
