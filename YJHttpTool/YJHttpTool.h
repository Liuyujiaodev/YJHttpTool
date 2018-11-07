//
//  YLHttpRequest.h
//  YLXD
//
//  Created by 刘玉娇 on 2017/10/10.
//  Copyright © 2017年 yj. All rights reserved.
//

#import <Foundation/Foundation.h>


typedef void(^Success)(NSDictionary *dic);
typedef void(^Failure)(NSError *error);
typedef void(^RequestFailure)(NSDictionary *dic);

@interface YJHttpTool : NSObject

@property (nonatomic, copy) NSString* baseUrl;

+ (instancetype)sharedInstance;

- (void)sendRequest:(NSString*)apiName
             params:(NSDictionary*)params
            success:(Success)success
     requestFailure:(RequestFailure)requestFailure
            failure:(Failure)failure;


- (void)sendRequestBaseURL:(NSString*)baseUrl
            apiName:(NSString*)apiName
             params:(NSDictionary*)params
            success:(Success)success
     requestFailure:(RequestFailure)requestFailure
            failure:(Failure)failure;

-(BOOL) hasWifi;
-(BOOL) hasNetwork;

@end
