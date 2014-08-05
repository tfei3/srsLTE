/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "./asn1c/ASN1_files/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#ifndef	_RSRP_Range_H_
#define	_RSRP_Range_H_


#include <liblte/rrc/asn/asn_application.h>

/* Including external dependencies */
#include <liblte/rrc/asn/NativeInteger.h>

#ifdef __cplusplus
extern "C" {
#endif

/* RSRP-Range */
typedef long	 RSRP_Range_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RSRP_Range;
asn_struct_free_f RSRP_Range_free;
asn_struct_print_f RSRP_Range_print;
asn_constr_check_f RSRP_Range_constraint;
ber_type_decoder_f RSRP_Range_decode_ber;
der_type_encoder_f RSRP_Range_encode_der;
xer_type_decoder_f RSRP_Range_decode_xer;
xer_type_encoder_f RSRP_Range_encode_xer;
per_type_decoder_f RSRP_Range_decode_uper;
per_type_encoder_f RSRP_Range_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _RSRP_Range_H_ */
#include <liblte/rrc/asn/asn_internal.h>