//
//  RegexLanguage.h
//  LSBuyer
//
//  Created by 刘光强 on 15/7/21.
//  Copyright (c) 2015年 ls. All rights reserved.
//正则表达式集合

#import <Foundation/Foundation.h>

@interface RegexLanguage : NSObject

//手机号码判断
+(BOOL)isMobileNumber:(NSString *)mobileNum;

//固定电话
+(BOOL)isTelephoneNumber:(NSString *)mobileNum;

// 判断密码的正则表达式
+(BOOL) validatePassword:(NSString *)passWord;

//用户名
+(BOOL)isLegalUserName:(NSString *)userName;

// 邮箱
+(BOOL)isLegalEmail:(NSString*)email;

//QQ
+(BOOL) isLegalQQ:(NSString*)qq;

//是否包含表情字符
+(BOOL)isContainsEmoji:(NSString *)string;

// 检查特殊字符
+(BOOL)checkSpecialChar:(NSString *)aCandidate;

//只能输入纯数字,并且不带小数点
+(BOOL)checkNumeric:(NSString *)aCandidate;

// 检查含汉字字符
+(BOOL)checkChineseChar:(NSString *)aCandidate;

// 检查字符
+(BOOL)checkCharacter:(NSString *)aCandidate;

// 最多输入9位数字
+(BOOL)checkNumLimit:(NSString *)aCandidate;

@end
