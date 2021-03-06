/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
 */

@interface CNScheduler : NSObject

+ (id)globalAsyncScheduler;
+ (id)immediateScheduler;
+ (id)mainThreadScheduler;
+ (id)operationQueueSchedulerWithMaxConcurrentOperationCount:(long long)arg1;
+ (id)serialDispatchQueueSchedulerWithName:(id)arg1;
+ (id)synchronousSerialDispatchQueueWithName:(id)arg1;

@end
