/*
 * INT0.H
 *
 *  Created on: Oct 23, 2018
 *      Author: Mahmoud Mohamed Younis
 */

#ifndef INT1_H_
#define INT1_H_

#include <avr/io.h>

/*
            ISC11   ISC10   Description
-------------------------------------------------------------------
* MODE #1:   0       0      The low level of INT1 generates an interrupt request.
* MODE #2:   0       1      Any logical change on INT1 generates an interrupt request.
* MODE #3:   1       0      The falling edge of INT1 generates an interrupt request.
* MODE #4:   1       1      The rising edge of INT1 generates an interrupt request.
*/
// Link :

// Select Mode of operation
#define MODE 1

void INT1_INIT (void);

#endif /* INT1_H_ */
