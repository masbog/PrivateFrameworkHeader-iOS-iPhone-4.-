/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SportsWorkout.framework/SportsWorkout
 */

@class NSTimer, NSFileHandle;

@interface SWBluetoothMessageHandler : NSObject  {
    struct __CFRunLoop { } *_btRunLoop;
    struct __CFRunLoopTimer { } *_futureTimer;
    BOOL _shouldCancelBTThread;
    BOOL _isActive;
    BOOL _isActivating;
    BOOL _isConnecting;
    unsigned int _btSensorDeviceCount;
    NSTimer *_multiSensorTimer;
    int _deviceVirtualType;
    unsigned int _serviceMask;
    struct BTSessionImpl { } *_btSession;
    struct BTLocalDeviceImpl { } *_btLocalDevice;
    struct BTDiscoveryAgentImpl { } *_btDiscoveryAgent;
    struct BTDeviceImpl { } *_btSensorDevice;
    NSFileHandle *_btSensorDeviceInputHandle;
    BOOL _rssi;
}

@property(readonly) BOOL rssi;

+ (id)newMessageHandler;

- (void)activate;
- (void)deactivate;
- (BOOL)isActive;
- (id)init;
- (void)cancelConnectToDevice;
- (struct { unsigned char x1[6]; })deviceAddressForSensor;
- (BOOL)isSensorDeviceConnected;
- (void)connectToDeviceWithAddress:(struct { unsigned char x1[6]; })arg1;
- (void)requestRSSI;
- (void)forgetSensorDevice;
- (void)beginDeviceDiscovery:(int)arg1 serviceMask:(unsigned int)arg2;
- (BOOL)rssi;
- (void)_btThreadMain;
- (void)_cancelBTThread;
- (const char *)__btSessionName;
- (BOOL)isSensorDeviceDiscovered;
- (void)startReadingInput;
- (void)_attachToSession;
- (void)_detachSession;
- (void)_getLocalDevice;
- (void)_clearLocalDevice;
- (void)_setupLocalDeviceCallbacks;
- (void)_clearLocalDeviceCallbacks;
- (void)_setupServiceCallbacks;
- (void)_clearServiceCallbacks;
- (void)_createDiscoveryAgent;
- (void)_beginDiscoveryAgentScan;
- (void)_getDiscoveredDevicesFromAgent;
- (void)_handleDeviceFound:(struct BTDeviceImpl { }*)arg1;
- (void)_handleDeviceLost:(struct BTDeviceImpl { }*)arg1;
- (void)_stopDiscoveryAgentScan;
- (void)_destroyDiscoveryAgent;
- (void)_setSensorDeviceVirtualType;
- (BOOL)_isPowerOnForLocalDeviceModule:(unsigned int)arg1;
- (void)_setPowerOn:(BOOL)arg1 forLocalDeviceModule:(unsigned int)arg2;
- (void)_handleMultiSensorTimer:(id)arg1;
- (void)_handleScanDidEnd;
- (void)_setDeviceForAddress:(struct { unsigned char x1[6]; })arg1;
- (void)_connectToDevice:(struct BTDeviceImpl { }*)arg1;
- (void)_disconnectFromDevice:(struct BTDeviceImpl { }*)arg1;
- (void)_handleDataAvailableNotification:(id)arg1;
- (void)_openInputPort;
- (void)_closeInputPort;
- (void)_handleApplicationWillTerminateNotification:(id)arg1;
- (void)_bluetoothSessionDidAttach:(struct BTSessionImpl { }*)arg1 withResult:(int)arg2;
- (void)_bluetoothSessionDidDetach:(struct BTSessionImpl { }*)arg1 withResult:(int)arg2;
- (void)_bluetoothSessionDidTerminate:(struct BTSessionImpl { }*)arg1 withResult:(int)arg2;
- (void)_bluetoothSessionDidFail:(struct BTSessionImpl { }*)arg1 withResult:(int)arg2;
- (void)_bluetoothLocalDeviceDidChangePowerState:(struct BTLocalDeviceImpl { }*)arg1 withResult:(int)arg2;
- (void)_bluetoothLocalDeviceDidChangeName:(struct BTLocalDeviceImpl { }*)arg1 withResult:(int)arg2;
- (void)_bluetoothLocalDeviceDidChangeDiscoverability:(struct BTLocalDeviceImpl { }*)arg1 withResult:(int)arg2;
- (void)_bluetoothLocalDeviceDidChangeConnectability:(struct BTLocalDeviceImpl { }*)arg1 withResult:(int)arg2;
- (void)_bluetoothLocalDeviceDidChangePairingStatus:(struct BTLocalDeviceImpl { }*)arg1 withResult:(int)arg2;
- (void)_bluetoothLocalDeviceDidChangeConnectionStatus:(struct BTLocalDeviceImpl { }*)arg1 withResult:(int)arg2;
- (void)_retryConnectToDevice;
- (void)_bluetoothLocalDeviceDiscoveryDidStart:(struct BTLocalDeviceImpl { }*)arg1 withResult:(int)arg2;
- (void)_bluetoothLocalDeviceDiscoveryDidEnd:(struct BTLocalDeviceImpl { }*)arg1 withResult:(int)arg2;
- (void)_bluetoothServicesDidConnect:(unsigned int)arg1 device:(struct BTDeviceImpl { }*)arg2 forEvent:(unsigned int)arg3 withResult:(int)arg4;
- (void)_bluetoothServicesDidDisconnect:(unsigned int)arg1 device:(struct BTDeviceImpl { }*)arg2 forEvent:(unsigned int)arg3 withResult:(int)arg4;
- (void)_bluetoothServicesDidIndicateServiceSpecificEvent:(unsigned int)arg1 device:(struct BTDeviceImpl { }*)arg2 forEvent:(unsigned int)arg3 withResult:(int)arg4;
- (void)_bluetoothDiscoveryAgentScanDidBegin:(struct BTDiscoveryAgentImpl { }*)arg1 forDevice:(struct BTDeviceImpl { }*)arg2 withResult:(int)arg3;
- (void)_bluetoothDiscoveryAgentScanDidEnd:(struct BTDiscoveryAgentImpl { }*)arg1 forDevice:(struct BTDeviceImpl { }*)arg2 withResult:(int)arg3;
- (void)_bluetoothDiscoveryAgentQueryDidBegin:(struct BTDiscoveryAgentImpl { }*)arg1 forDevice:(struct BTDeviceImpl { }*)arg2 withResult:(int)arg3;
- (void)_bluetoothDiscoveryAgentQueryDidEnd:(struct BTDiscoveryAgentImpl { }*)arg1 forDevice:(struct BTDeviceImpl { }*)arg2 withResult:(int)arg3;
- (void)_bluetoothDiscoveryAgent:(struct BTDiscoveryAgentImpl { }*)arg1 didFindDevice:(struct BTDeviceImpl { }*)arg2 withAttributes:(unsigned int)arg3;
- (void)_bluetoothDiscoveryAgent:(struct BTDiscoveryAgentImpl { }*)arg1 didLoseDevice:(struct BTDeviceImpl { }*)arg2 withAttributes:(unsigned int)arg3;
- (void)_bluetoothDiscoveryAgent:(struct BTDiscoveryAgentImpl { }*)arg1 deviceDidChange:(struct BTDeviceImpl { }*)arg2 withAttributes:(unsigned int)arg3;

@end
