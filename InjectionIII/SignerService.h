//
//  SignerService.h
//  InjectionIII
//
//  Created by John Holdsworth on 06/11/2017.
//  Copyright © 2017 John Holdsworth. All rights reserved.
//

#import "SimpleSocket.h"

@interface SignerService : SimpleSocket

+ (BOOL)codesignDylib:(NSString *)dylib;

@end
