//
//  JESafetyHelpers.h
//  JEToolkit
//
//  Created by John Rommel Estropia on 2013/10/14.
//  Copyright (c) 2013 John Rommel Estropia. All rights reserved.
//

#import "JECompilerDefines.h"


#ifndef JEToolkit_JESafetyHelpers_h
#define JEToolkit_JESafetyHelpers_h



#pragma mark - Key-Value Coding

#if DEBUG

#define KVC(type, property) \
    ({ \
        type _##property##_dummy; \
        _##property##_dummy.property, @#property; \
    })

#else

#define KVC(class, property) \
    ( @#property )

#endif



#pragma mark - Localizable Strings

JE_STATIC_INLINE JE_NONNULL_ALL JE_OVERLOAD
NSString *L8N(NSString *keyString)
{
	NSString *localizedString = NSLocalizedString(keyString, nil);
    NSCAssert(keyString != localizedString,
              @"\"%@\" not found in Localizable.strings",
              keyString);
    return localizedString;
}

JE_STATIC_INLINE JE_NONNULL_ALL JE_OVERLOAD
NSString *L8N(NSString *keyString, NSString *stringsFile)
{
	NSString *localizedString = NSLocalizedStringFromTable(keyString, stringsFile, nil);
    NSCAssert(keyString != localizedString,
              @"\"%@\" not found in %@.strings",
              keyString,
              stringsFile);
    return localizedString;
}


#pragma mark - Convenience

#define IsEnumBitSet(enumVar, enumBit) ( (enumVar & enumBit) == enumBit )



#endif