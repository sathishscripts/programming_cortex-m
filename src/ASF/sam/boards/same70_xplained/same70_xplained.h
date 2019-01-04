/**
 * \file
 *
 * \brief SAME70-XPLD Board Definition.
 *
 * Copyright (c) 2015-2018 Microchip Technology Inc. and its subsidiaries.
 *
 * \asf_license_start
 *
 * \page License
 *
 * Subject to your compliance with these terms, you may use Microchip
 * software and any derivatives exclusively with Microchip products.
 * It is your responsibility to comply with third party license terms applicable
 * to your use of third party software (including open source software) that
 * may accompany Microchip software.
 *
 * THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES,
 * WHETHER EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE,
 * INCLUDING ANY IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY,
 * AND FITNESS FOR A PARTICULAR PURPOSE. IN NO EVENT WILL MICROCHIP BE
 * LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, INCIDENTAL OR CONSEQUENTIAL
 * LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND WHATSOEVER RELATED TO THE
 * SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP HAS BEEN ADVISED OF THE
 * POSSIBILITY OR THE DAMAGES ARE FORESEEABLE.  TO THE FULLEST EXTENT
 * ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL CLAIMS IN ANY WAY
 * RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT OF FEES, IF ANY,
 * THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS SOFTWARE.
 *
 * \asf_license_stop
 *
 */
/*
 * Support and FAQ: visit <a href="https://www.microchip.com/support/">Microchip Support</a>
 */

#ifndef _SAME70_XPLD_H_
#define _SAME70_XPLD_H_

#include "compiler.h"
#include "system_same70.h"

/*----------------------------------------------------------------------------*/
/**
 *  \page same70_xplained_pro_opfreq "SAME70-XPLD - Operating frequencies"
 *  This page lists several definition related to the board operating frequency
 *
 *  \section Definitions
 *  - \ref BOARD_FREQ_*
 *  - \ref BOARD_MCK
 */

/** Board oscillator settings */
#define BOARD_FREQ_SLCK_XTAL            (32768U)
#define BOARD_FREQ_SLCK_BYPASS          (32768U)
#define BOARD_FREQ_MAINCK_XTAL          (12000000U)
#define BOARD_FREQ_MAINCK_BYPASS        (12000000U)

/** Master clock frequency */
#define BOARD_MCK                       CHIP_FREQ_CPU_MAX

/** board main clock xtal statup time */
#define BOARD_OSC_STARTUP_US            15625

/*----------------------------------------------------------------------------*/
/**
 * \page same70_xplained_info "SAME70-XPLD - Board informations"
 * This page lists several definition related to the board description.
 *
 * \section Definitions
 * - \ref BOARD_NAME
 */

/** Name of the board */
#define BOARD_NAME "SAME70-XPLD"
/** Board definition */
#define same70xpld
/** Family definition (already defined) */
#define same70
/** Core definition */
#define cortexm7

/*----------------------------------------------------------------------------*/

#define CONSOLE_UART               UART1
#define CONSOLE_UART_ID            ID_UART1

#define UART1_RXD_GPIO	PIO_PA5_IDX
#define UART1_RXD_FLAGS	IOPORT_MODE_MUX_C
#define UART1_TXD_GPIO	PIO_PA4_IDX
#define UART1_TXD_FLAGS	IOPORT_MODE_MUX_C


//! \name LED definitions
//@{
#define LED0_GPIO            (PIO_PC9_IDX)
#define LED0_FLAGS           (0)
#define LED0_ACTIVE_LEVEL    (IOPORT_PIN_LEVEL_LOW)
#define LED0_INACTIVE_LEVEL  (IOPORT_PIN_LEVEL_HIGH)

#define	LED_COUNT			 (1)
//@}


/*----------------------------------------------------------------------------*/
#endif   /* _SAME70_XPLD_H_ */
