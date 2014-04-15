// -*- aya -*-
/**
 * @author  n13i <n13i@m2hq.net>
 * @version 0.1.2
 *
 * @date 2006/02/21 �쐬
 * @date 2006/02/22 prefix MXCL_ �t��
 * @date 2006/03/05 �֐��ǉ��E�֐����ύX
 * @date 2006/03/13 �֐��ǉ�
 * @date 2006/07/13 �֐��ǉ�
 * @date 2006/07/19 �֐��ǉ�
 * @date 2006/07/25 �֐��ǉ�
 * @date 2006/11/25 �֐��ǉ�
 * @date 2006/12/10 �֐��ǉ�
 *
 * @file
 *
 * @defgroup libmxcl mxproject ���ʃL�����N�^���C�u����
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
