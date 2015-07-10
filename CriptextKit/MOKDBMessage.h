//
//  Message.h
//  Criptext
//
//  Created by Alvaro Ortiz on 11/19/14.
//  Copyright (c) 2014 Nicolas VERINAUD. All rights reserved.
//

#import <Realm/Realm.h>

@interface MOKDBMessage : RLMObject

@property NSInteger messageId;
@property NSInteger oldmessageId;
@property NSString *userIdFrom;
@property NSString *userIdTo;
@property NSInteger protocolCommand;
@property NSInteger protocolType;
@property double timestampCreated;
@property double timestampOrder;
@property NSString *messageText;
@property BOOL readByUser;
@property NSString *mkprops;
@property NSString *param;

@end