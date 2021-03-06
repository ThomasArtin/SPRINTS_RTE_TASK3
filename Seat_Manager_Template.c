/**
 *
 * \file Seat_Manager_Template.c
 * \brief Rte Component Template for AUTOSAR SWC: Seat_Manager
 *
 * \author Sprints AUTOSAR Authoring Tool (SAAT) v1.0.2
 * Generated on 7/16/2020 05:30 PM
 *
 * For any inquiries: hassan.m.farahat@gmail.com
 *
 */

#include "Rte_Seat_Manager.h"


/**
 *
 * Runnable SeatManager_SetHeight
 *
 * Triggered By:
 *  - DataReceivedEventImpl.DRE_rpSeatCtrlBtns_HeightBtnState
 *
 */

void SeatManager_SetHeight (void)
{
	Std_ReturnType status;
	MultiStateBtn HeightBtnState;
	/* Data Receive Points */
	status = Rte_Read_rpSeatCtrlBtns_HeightBtnState(&HeightBtnState);
	if (status == RTE_E_OK)
	{
		if (HeightBtnState == MULTI_STATE_BTN_MINUS)
		{
			 Rte_Call_rpHeightMotor_Move(MOTOR_STEP_MINUS);
		}
		else if (HeightBtnState == MULTI_STATE_BTN_PLUS)
		{
			 Rte_Call_rpHeightMotor_Move(MOTOR_STEP_PLUS);
		}
	}
}


/**
 *
 * Runnable SeatManager_SetIncline
 *
 * Triggered By:
 *  - DataReceivedEventImpl.DRE_rpSeatCtrlBtns_SlideBtnState
 *
 */

void SeatManager_SetIncline (void)
{
	Std_ReturnType status;
	MultiStateBtn InclineBtnState;

	/* Data Receive Points */
	status = Rte_Read_rpSeatCtrlBtns_InclineBtnState(&InclineBtnState);
	if (status == RTE_E_OK)
	{
		if (InclineBtnState == MULTI_STATE_BTN_MINUS)
		{
			 Rte_Call_rpInclineMotor_Move(MOTOR_STEP_MINUS);
		}
		else if (InclineBtnState == MULTI_STATE_BTN_PLUS)
		{
			 Rte_Call_rpInclineMotor_Move(MOTOR_STEP_PLUS);
		}
	}
}


/**
 *
 * Runnable SeatManager_SetSlide
 *
 * Triggered By:
 *  - DataReceivedEventImpl.DRE_rpSeatCtrlBtns_SlideBtnState
 *
 */

void SeatManager_SetSlide (void)
{
	Std_ReturnType status;
	MultiStateBtn SlideBtnState;

	/* Data Receive Points */
	status = Rte_Read_rpSeatCtrlBtns_SlideBtnState(&SlideBtnState);
	if (status == RTE_E_OK)
	{
		if (SlideBtnState == MULTI_STATE_BTN_MINUS)
		{
			 Rte_Call_rpSlideMotor_Move(MOTOR_STEP_MINUS);
		}
		else if (SlideBtnState == MULTI_STATE_BTN_PLUS)
		{
			 Rte_Call_rpSlideMotor_Move(MOTOR_STEP_PLUS);
		}
	}
}

