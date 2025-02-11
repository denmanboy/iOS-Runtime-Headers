/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PerformanceAnalysis.framework/PerformanceAnalysis
 */

@interface PAAggregatedProcessInstance : PAAggregatedTask {
    BOOL _combinedStacks;
    NSMutableSet *_concurrentDispatchQueueIds;
    unsigned int _countSuspended;
    unsigned int _countTerminated;
    unsigned long long _cpuTimeNsCached;
    unsigned int _firstTimestampIndex;
    unsigned long long _mainThreadId;
    NSMutableArray *_sampleTasks;
    NSArray *_threadsInPreviousSample;
    struct __CFDictionary { } *stacks;
}

@property (readonly) PAProcessInstanceAggregator *aggregator;
@property (readonly) BOOL allowsIdleExit;
@property (readonly) NSMutableSet *concurrentDispatchQueueIds;
@property (readonly) unsigned int count;
@property (readonly) unsigned int countSuspended;
@property (readonly) unsigned int countTerminated;
@property (readonly) unsigned int firstTimestampIndex;
@property (readonly) BOOL isDirty;
@property (readonly) BOOL isThirdParty;
@property (readonly) BOOL isUnresponsive;
@property (readonly) unsigned int lastTimestampIndex;
@property (readonly) unsigned long long mainBinaryOffset;
@property (readonly) NSString *mainBinaryPath;
@property (readonly) NSUUID *mainBinaryUuid;
@property (readonly) NSString *name;
@property (readonly) int pid;
@property (readonly) int ppid;
@property (readonly) int rpid;
@property (readonly) NSMutableArray *sampleTasks;
@property (retain) NSArray *threadsInPreviousSample;
@property (readonly) double timeOfLastResponse;
@property (readonly) unsigned int uid;
@property (readonly) unsigned long long uniqueId;
@property (readonly) BOOL usesSuddenTermination;
@property (readonly) BOOL workQueueExceededConstrainedThreadLimit;
@property (readonly) BOOL workQueueExceededTotalThreadLimit;

- (void)_combineMainThreadStacks;
- (void)_combineSerialDispatchQueueStacks;
- (BOOL)_shouldDisplayStacks;
- (void)addSampleTask:(id)arg1 atTimestampIndex:(unsigned int)arg2;
- (void)addSampleThread:(id)arg1 atTimestampIndex:(unsigned int)arg2;
- (id)aggregator;
- (BOOL)allowsIdleExit;
- (id)architectureString;
- (void)combineStacks;
- (int)compare:(id)arg1;
- (id)concurrentDispatchQueueIds;
- (unsigned int)count;
- (unsigned int)countSuspended;
- (unsigned int)countTerminated;
- (unsigned long long)cpuTimeNs;
- (void)dealloc;
- (id)debugDescription;
- (unsigned int)firstTimestampIndex;
- (unsigned int)hash;
- (id)initForIdentificationPurposesWithSampleTask:(id)arg1;
- (id)initWithAggregator:(id)arg1 andSampleTask:(id)arg2 atTimestampIndex:(unsigned int)arg3;
- (BOOL)isDirty;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isThirdParty;
- (BOOL)isUnresponsive;
- (unsigned int)lastTimestampIndex;
- (unsigned long long)mainBinaryOffset;
- (id)mainBinaryPath;
- (id)mainBinaryUuid;
- (id)name;
- (int)pid;
- (int)ppid;
- (void)printHeaderToStream:(struct __sFILE { char *x1; int x2; int x3; short x4; short x5; struct __sbuf { char *x_6_1_1; int x_6_1_2; } x6; int x7; void *x8; int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); struct __sbuf { char *x_13_1_1; int x_13_1_2; } x13; struct __sFILEX {} *x14; int x15; unsigned char x16[3]; unsigned char x17[1]; struct __sbuf { char *x_18_1_1; int x_18_1_2; } x18; int x19; long long x20; }*)arg1;
- (void)printStacksToStream:(struct __sFILE { char *x1; int x2; int x3; short x4; short x5; struct __sbuf { char *x_6_1_1; int x_6_1_2; } x6; int x7; void *x8; int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); struct __sbuf { char *x_13_1_1; int x_13_1_2; } x13; struct __sFILEX {} *x14; int x15; unsigned char x16[3]; unsigned char x17[1]; struct __sbuf { char *x_18_1_1; int x_18_1_2; } x18; int x19; long long x20; }*)arg1;
- (void)printToStream:(struct __sFILE { char *x1; int x2; int x3; short x4; short x5; struct __sbuf { char *x_6_1_1; int x_6_1_2; } x6; int x7; void *x8; int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); struct __sbuf { char *x_13_1_1; int x_13_1_2; } x13; struct __sFILEX {} *x14; int x15; unsigned char x16[3]; unsigned char x17[1]; struct __sbuf { char *x_18_1_1; int x_18_1_2; } x18; int x19; long long x20; }*)arg1;
- (int)rpid;
- (id)sampleTaskAtTimestampIndex:(unsigned int)arg1;
- (id)sampleTasks;
- (void)setThreadsInPreviousSample:(id)arg1;
- (id)sortedStacks;
- (id)threadsInPreviousSample;
- (double)timeOfLastResponse;
- (unsigned int)uid;
- (unsigned long long)uniqueId;
- (BOOL)usesSuddenTermination;
- (BOOL)workQueueExceededConstrainedThreadLimit;
- (BOOL)workQueueExceededTotalThreadLimit;

@end
