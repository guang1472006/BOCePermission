//
//  BOCePermission.h
//  Industrial
//
//  Created by 张文学 on 2020/9/8.
//  Copyright © 2020 boce. All rights reserved.
//

#import <Foundation/Foundation.h>

//权限类型
typedef enum : NSUInteger{
    PermissionTypeCamera,           //相机权限
    PermissionTypeMic,              //麦克风权限
    PermissionTypePhoto,            //相册权限
    PermissionTypeLocationWhen,     //获取地理位置When
    PermissionTypeCalendar,         //日历
    PermissionTypeContacts,         //联系人
    PermissionTypeBlue,             //蓝牙
    PermissionTypeRemaine,          //提醒
    PermissionTypeHealth,           //健康
    PermissionTypeMediaLibrary      //多媒体
}PermissionType;

typedef void (^callBack) (BOOL granted, id _Nullable  data);

NS_ASSUME_NONNULL_BEGIN

@interface BOCePermission : NSObject

@property(strong,nonatomic)callBack block;

/*
 * 获取权限
 * @param  type       类型
 * @param  block      回调
 */
- (void)permissonType:(PermissionType)type;

@end

NS_ASSUME_NONNULL_END
