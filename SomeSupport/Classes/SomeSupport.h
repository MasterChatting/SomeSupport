//
//  SomeSupport.h
//  JJJJ
//
//  Created by NHT on 2022/3/30.
//

#ifndef SomeSupport_h
#define SomeSupport_h

#import "Support_Common.h"
#import "Support_Time.h"


//字符串是否不为空 yes不为空 NO为空
#define  IsNOTEmptyStr(string) (string == nil || string == NULL || [string isKindOfClass:[NSNull class]]|| [[string stringByTrimmingCharactersInSet:[NSCharacterSet whitespaceCharacterSet]] length]==0 ? NO : YES)
//判读字符串是空 YES 是  NO不是
#define  IsEmptyStr(string)  !(IsNOTEmptyStr(string))
#define  IntToString(int) [NSString stringWithFormat:@"%d",int]
#define  NSIntegerToString(NSInteger) [NSString stringWithFormat:@"%ld",NSInteger]
#define  LongToString(Long) [NSString stringWithFormat:@"%lld",Long]
#define  FloatToString(float) [NSString stringWithFormat:@"%f",float]
#define rgba(r,g,b,a) [UIColor colorWithRed:(float)r/255.0f green:(float)g/255.0f blue:(float)b/255.0f alpha:a]
#define ColorWithHex(hex) [UIColor colorWithRed:(((hex & 0xFF0000) >> 16 )) / 255.0 green:((( hex & 0xFF00 ) >> 8 )) / 255.0 blue:(( hex & 0xFF )) / 255.0 alpha:1.0]
#define SCREEN_WIDTH [[UIScreen mainScreen] bounds].size.width
#define SCREEN_HEIGHT [[UIScreen mainScreen] bounds].size.height



#endif /* SomeSupport_h */
