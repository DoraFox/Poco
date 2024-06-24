/* Do not edit this file manually.
   This file is autogenerated by windmc.  */

//
//  The values are 32 bit layed out as follows:
//
//   3 3 2 2 2 2 2 2 2 2 2 2 1 1 1 1 1 1 1 1 1 1
//   1 0 9 8 7 6 5 4 3 2 1 0 9 8 7 6 5 4 3 2 1 0 9 8 7 6 5 4 3 2 1 0
//  +---+-+-+-----------------------+-------------------------------+
//  |Sev|C|R|     Facility          |               Code            |
//  +---+-+-+-----------------------+-------------------------------+
//
//  where
//
//      C    - is the Customer code flag
//
//      R    - is a reserved bit
//
//      Code - is the facility's status code
//
//      Sev  - is the severity code
//
//           Success - 00
//           Informational - 01
//           Warning - 02
//           Error - 03
//
//      Facility - is the facility code
//
//           System - 00ff
//           Application - 0fff
//

//
// pocomsg.mc[.h]
//
// The Poco message source/header file.
//
// NOTE: pocomsg.h is automatically generated from pocomsg.mc.
//       Never edit pocomsg.h directly!
//
// Copyright (c) 2004-2006, Applied Informatics Software Engineering GmbH.
// and Contributors.
//
// Permission is hereby granted, free of charge, to any person or organization
// obtaining a copy of the software and accompanying documentation covered by
// this license (the "Software") to use, reproduce, display, distribute,
// execute, and transmit the Software, and to prepare derivative works of the
// Software, and to permit third-parties to whom the Software is furnished to
// do so, all subject to the following:
//
// The copyright notices in the Software and this entire statement, including
// the above license grant, this restriction and the following disclaimer,
// must be included in all copies of the Software, in whole or in part, and
// all derivative works of the Software, unless such copies or derivative
// works are solely in the form of machine-executable object code generated by
// a source language processor.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE, TITLE AND NON-INFRINGEMENT. IN NO EVENT
// SHALL THE COPYRIGHT HOLDERS OR ANYONE DISTRIBUTING THE SOFTWARE BE LIABLE
// FOR ANY DAMAGES OR OTHER LIABILITY, WHETHER IN CONTRACT, TORT OR OTHERWISE,
// ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
// DEALINGS IN THE SOFTWARE.
//
//
// Categories
//
//
// MessageId: POCO_CTG_FATAL
//
#define POCO_CTG_FATAL  0x1

//
// MessageId: POCO_CTG_CRITICAL
//
#define POCO_CTG_CRITICAL  0x2

//
// MessageId: POCO_CTG_ERROR
//
#define POCO_CTG_ERROR  0x3

//
// MessageId: POCO_CTG_WARNING
//
#define POCO_CTG_WARNING  0x4

//
// MessageId: POCO_CTG_NOTICE
//
#define POCO_CTG_NOTICE  0x5

//
// MessageId: POCO_CTG_INFORMATION
//
#define POCO_CTG_INFORMATION  0x6

//
// MessageId: POCO_CTG_DEBUG
//
#define POCO_CTG_DEBUG  0x7

//
// MessageId: POCO_CTG_TRACE
//
#define POCO_CTG_TRACE  0x8

//
// Event Identifiers
//
//
// MessageId: POCO_MSG_LOG
//
#define POCO_MSG_LOG  0x1000

