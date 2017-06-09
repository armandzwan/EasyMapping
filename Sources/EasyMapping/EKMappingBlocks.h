//
//  EasyMapping
//
//  Copyright (c) 2012-2015 Lucas Medeiros.
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>
#import "EKMappingContextProvider.h"

NS_ASSUME_NONNULL_BEGIN

typedef BOOL (^EKMappingConditionBlock)(id representation);

typedef _Nullable id(^EKMappingBlock)(EKMappingContext * context);

//typedef _Nullable id(^EKMappingValueBlock)(NSString *key, _Nullable id value);
//typedef _Nullable id(^EKMappingReverseBlock)(_Nullable id value);
//
//typedef _Nullable id(^EKManagedMappingValueBlock)(NSString * key, _Nullable id value, NSManagedObjectContext * context);
//typedef _Nullable id(^EKManagedMappingReverseValueBlock)(_Nullable id value, NSManagedObjectContext * context);

@interface EKMappingBlocks: NSObject

+ (EKMappingBlock)urlMappingBlock;
+ (EKMappingBlock)urlReverseMappingBlock;

@end

NS_ASSUME_NONNULL_END
