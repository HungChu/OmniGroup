// Copyright 2002-2006, 2010 Omni Development, Inc.  All rights reserved.
//
// This software may only be used and reproduced according to the
// terms in the file OmniSourceLicense.html, which should be
// distributed with this project and can also be found at
// <http://www.omnigroup.com/developer/sourcecode/sourcelicense/>.
//
// $Id$

#import <AppKit/NSPanel.h>

@interface OIInspectorWindow : NSPanel
{
    struct {
        unsigned int isBeingResizedByResizer:1;
    } _inspectorWindowFlags;
}

// API

@end

@protocol OIInspectorWindowDelegate <NSWindowDelegate>
- (void)windowWillBeginResizing:(NSWindow *)window;
- (void)windowDidFinishResizing:(NSWindow *)window;
- (NSRect)windowWillResizeFromFrame:(NSRect)fromRect toFrame:(NSRect)toRect;
@end
