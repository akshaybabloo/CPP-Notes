//
//  CPP-Notes
//
//  Created by Akshay Raj Gollahalli on 23/05/16.
//  Copyright © 2016 Akshay Raj Gollahalli. All rights reserved.
//

#ifndef main_h
#define main_h

#ifdef AGE // check to see if `#define AGE` is available in main.cpp
//#if defined(AGE) // Alternate to `#ifdef AGE`

#define NUMBER 21 // If AGE is defined let the NUMBER be 21

#else // if not defined

#define NUMBER 12 // If AGE is not defined let the number be

#endif // End the if condition


#endif /* main_h */
