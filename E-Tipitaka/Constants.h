//
//  Constants.h
//  E-Tipitaka
//
//  Created by Sutee Sudprasert on 3/12/13.
//
//

#ifndef E_Tipitaka_Constants_h
#define E_Tipitaka_Constants_h

#define IS_IPHONE5 (([[UIScreen mainScreen] bounds].size.height-568)?NO:YES)
#define IS_OS_5_OR_LATER    ([[[UIDevice currentDevice] systemVersion] floatValue] >= 5.0)
#define IS_OS_6_OR_LATER    ([[[UIDevice currentDevice] systemVersion] floatValue] >= 6.0)
#define IS_OS_7_OR_LATER    ([[[UIDevice currentDevice] systemVersion] floatValue] >= 7.0)

#endif
