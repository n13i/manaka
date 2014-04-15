/**
 * @defgroup INI INI ファイルパーサ
 * @{
 */
/**
 * @file
 *
 * @version 0.1.0
 *
 * @date    2006/02/23 作成
 */

int INI_new(string ini[][]);
int INI_read(string ini[][], string filename);
int INI_write(string ini[][], string filename);
int INI_setValue(string ini[][], string section, string key, string value);
string INI_getValue(string ini[][], string section, string key);
int INI_getKeys(string ini[][], string section, string keys[]);
int INI_getKeyCount(string ini[][], string section);
int INI_getSections(string ini[][], string sections[]);
int INI_destroy(string ini[][]);

/* @} */
