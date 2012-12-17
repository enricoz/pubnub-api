//
//  PNServiceChannel.h
//  pubnub
//
//  This channel is required to manage
//  service message sending to PubNub service.
//  Will send messages like:
//      - time
//      - leave
//      - history
//      - here now (list of participants)
//      - "ping" (latency measurement if enabled)
//
//
//  Created by Sergey Mamontov on 12/15/12.
//
//

#import "PNConnectionChannel.h"


@interface PNServiceChannel : PNConnectionChannel

@end