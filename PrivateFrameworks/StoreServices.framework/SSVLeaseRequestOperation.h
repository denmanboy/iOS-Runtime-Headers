/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSVLeaseRequestOperation : SSVOperation {
    NSString *_bagKey;
    NSObject<OS_dispatch_semaphore> *_bagLoadSemaphore;
    NSData *_certificateData;
    NSString *_certificateURLBagKey;
    SSVPlaybackLeaseConfiguration *_configuration;
    SSVFairPlaySubscriptionController *_fairPlaySubscriptionController;
    id /* block */ _outputBlock;
    SSVPlaybackLeaseRequest *_request;
    SSURLBag *_urlBag;
}

@property (copy) NSData *certificateData;
@property (copy) NSString *certificateURLBagKey;
@property (retain) SSVFairPlaySubscriptionController *fairPlaySubscriptionController;
@property (copy) id /* block */ outputBlock;

- (void).cxx_destruct;
- (BOOL)_addRequestBodyToRequest:(id)arg1 withCertificateData:(id)arg2 error:(id*)arg3;
- (BOOL)_resolveConfigurationAndURLReturningError:(id*)arg1;
- (void)cancel;
- (id)certificateData;
- (id)certificateURLBagKey;
- (id)fairPlaySubscriptionController;
- (id)initWithLeaseRequest:(id)arg1 URLBag:(id)arg2;
- (id)initWithLeaseRequest:(id)arg1 configuration:(id)arg2;
- (void)main;
- (id /* block */)outputBlock;
- (void)setCertificateData:(id)arg1;
- (void)setCertificateURLBagKey:(id)arg1;
- (void)setFairPlaySubscriptionController:(id)arg1;
- (void)setOutputBlock:(id /* block */)arg1;

@end
