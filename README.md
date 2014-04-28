NH-MXPJ-01R "MANAKA"
====================

キャラクター「愛佳」のソースコードは https://github.com/n13i/manaka で公開しています。
MITライセンスに基づいた利用が可能です。


## ビルド方法

### 必要なもの

* 愛佳のソースコード
  * https://github.com/n13i/manaka/archive/master.zip からダウンロード
  * 画像ファイル等，ソースコード以外のファイルは含まれませんので注意。

* PDK
  * http://www.praesens.co.jp/pws/develop/download_pdk.phtml からダウンロード

* SQLiteプラグインのヘッダファイル(db.h)
  * C:\Program Files (x86)\Praesens\Chararina\plugin\db の中 ※32bit OSの場合は(x86)なし

### フォルダ構成
下記のようなフォルダ構成にします。括弧で囲んだものはフォルダ，それ以外はファイルです。
存在しないフォルダは作成してください。

* [pdk] ←作成し，PDKのアーカイブの中身を展開
  * [ayac]
    * [plugin] ←作成
      * [db] ←作成
        * db.h ←ここにコピー
  * [bmpconv]
  * [chrinst]
  * [findf]
  * [manual]
  * [psnedit]
  * [tkprop]
  * Readme.txt
* [character] ←作成し，ソースコードのアーカイブの中身を展開
  * [manaka-master]
    * [exa]
    * build.bat
    * exapack.lst

### ビルド
1. 上記のmanaka-masterフォルダでコマンドプロンプトを開く
2. build

