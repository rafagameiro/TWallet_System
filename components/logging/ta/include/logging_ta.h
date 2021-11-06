/*
 *
 * Thesis: TWallet - ARM TrustZone Enabled Trustable Mobile Wallet: A Case for Cryptocurrency Wallets
 * NOVA School of Science and Technology, NOVA University of Lisbon
 *
 * Student: Rafael Rodrigues Gameiro nº50677
 * Advisor: Henrique João Domingues
 *
 */
#ifndef TA_LOGGING_H
#define TA_LOGGING_H

/*
 * This UUID is generated with uuidgen
 * the ITU-T UUID generator at http://www.itu.int/ITU-T/asn1/uuid.html
 */
#define TA_LOGGING_UUID \
	{ 0x31b125d8, 0xfae8, 0x4e9e, \
		{ 0x82, 0xdc, 0x30, 0x64, 0x22, 0x53, 0x59, 0x03} }

/* UUID set in String*/
#define TA_LOGGING_STRING \
	"31b125d8-fae8-4e9e-82dc-306422535903"

/* UUID used for storing the proof*/
#define TA_LOGGING_PROOF \
	"31b125d8-fae8-4e9e-82dc-306422535903-proof"

/* Additional Constants used in TAs functions*/
#define LOG_MAX_SIZE                    100
#define LOG_DATA_MAX_LENGTH             7000
#define SEGMENT_MAX_LENGTH              30 

/* The function IDs implemented in this TA */

/*
* TA_LOGGING_READ_DATA - Sends the stored log to the application side
* param[0] (memref) log stored in the component to be sent
* param[1] unused
* param[2] unused
* param[3] unused
*/
#define TA_LOGGING_READ_DATA		                0

/*
* TA_LOGGING_NEW_ENTRY - Create and store a new log entry
* param[0] (memref) ID of the service used to execute the operation
* param[1] (memref) operation executed
* param[2] (value) date when the operation was executed
* param[3] (value) time at which the operation was executed
*/
#define TA_LOGGING_NEW_ENTRY		                1

/*
* TA_LOGGING_GET_PROOF - Generates an attestation proof to be send to the attestation service
* param[0] (memref) attestation proof to be send back
* param[1] unused
* param[2] unused
* param[3] unused
*/
#define TA_LOGGING_GET_PROOF     	                2

#endif /*TA_LOGGING_H*/
