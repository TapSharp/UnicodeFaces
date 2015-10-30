//
//  FollowPleaSettings.stub
//  FollowPlea
//
//  Created by TapSharp on 28/19/2015.
//
//  The MIT License (MIT)
//
//  Copyright (c) 2015 TapSharp
//
//  Permission is hereby granted, free of charge, to any person obtaining a copy of
//  this software and associated documentation files (the "Software"), to deal in
//  the Software without restriction, including without limitation the rights to
//  use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of
//  the Software, and to permit persons to whom the Software is furnished to do so,
//  subject to the following conditions:
//
//  The above copyright notice and this permission notice shall be included in all
//  copies or substantial portions of the Software.
//
//  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
//  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS
//  FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR
//  COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER
//  IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
//  CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
//


/**
 * FollowPlea Marker File
 *
 * This is the file that would be created that will let FollowPlea know it
 * has run at least once on this device. Keep it unique.
 */

#define FP_FILE @"/var/mobile/Library/Preferences/com.tapsharp.unicodefaces.plea"


/**
 * Welcome UIAlertView
 */

#define FP_PLEA_MSG_TITLE @"Thanks for Installing!"

#define FP_PLEA_MSG_BODY @"A lot of hard work goes into making tweaks. Please consider following me on Twitter!"

#define FP_CANCEL_LABEL @"No Thanks"

#define FP_OKAY_LABEL @"Okay Sure"


/**
 * Access Granted UIAlertView
 */

#define FP_WHICH_ACCOUNT_TITLE @"Which Account?"

#define FP_WHICH_ACCOUNT_BODY @"Select an account to follow with."

#define FP_ALL_ACCOUNTS_LABEL @"All Accounts!"


/**
 * Your Twitter Screen Name
 */

#define FP_TWITTER_SCREENNAME @"TapSharp"


/**
 * Follow Response callback.
 *
 * Callback thats fired when a single twitter follow request returns
 * a response.
 */
#define FP_CALLBACK_HANDLER(data, urlResponse, error){}
