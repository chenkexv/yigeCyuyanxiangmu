/*
  +----------------------------------------------------------------------+
  | PHP Version 5                                                        |
  +----------------------------------------------------------------------+
  | Copyright (c) 1997-2010 The PHP Group                                |
  +----------------------------------------------------------------------+
  | This source file is subject to version 3.01 of the PHP license,      |
  | that is bundled with this package in the file LICENSE, and is        |
  | available through the world-wide-web at the following url:           |
  | http://www.php.net/license/3_01.txt                                  |
  | If you did not receive a copy of the PHP license and are unable to   |
  | obtain it through the world-wide-web, please send a note to          |
  | license@php.net so we can mail you a copy immediately.               |
  +----------------------------------------------------------------------+
  | Author:                                                              |
  +----------------------------------------------------------------------+
*/

//zend类对象
zend_class_entry	*CQrcodeCe;


//类方法:创建应用
PHP_METHOD(CQrcode,getInstance);
PHP_METHOD(CQrcode,setContent);
PHP_METHOD(CQrcode,show);
PHP_METHOD(CQrcode,setIcon);
PHP_METHOD(CQrcode,getFilePath);
PHP_METHOD(CQrcode,create);
PHP_METHOD(CQrcode,__construct);
