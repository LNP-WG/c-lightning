/* Bug https://github.com/ElementsProject/lightning/issues/2820
 *
 No valid signature found for 3 htlc_timeout_txs feerate 10992-15370, last tx 0200000001a02a38c6ec5541963704a2a035b3094b18d69cc25cc7419d75e02894618329720000000000000000000191ea3000000000002200208bfadb3554f41cc06f00de0ec2e2f91e36ee45b5006a1f606146784755356ba532f10800, input 3215967sat, signature 3045022100917efdc8577e8578aef5e513fad25edbb55921466e8ffccb05ce8bb05a54ae6902205c2fded9d7bfc290920821bfc828720bc24287f3dad9a62fb4f806e2404ed0f401, cltvs 585998/585998/586034 wscripts 76a914f454b1fe5b95428d6beec58ed3131a6ea611b2fa8763ac672103f83ca95b22920e71487736a7284696dd52443fd8f7ce683153ac31d1d1db7da67c820120876475527c21026ebaa1d08757b86110e40e3f4a081803eec694e23ec75ee0bfd753589df896e752ae67a9148dbcec4a5d782dd87588801607ea7dfc8874ffee88ac6868/76a914f454b1fe5b95428d6beec58ed3131a6ea611b2fa8763ac672103f83ca95b22920e71487736a7284696dd52443fd8f7ce683153ac31d1d1db7da67c820120876475527c21026ebaa1d08757b86110e40e3f4a081803eec694e23ec75ee0bfd753589df896e752ae67a9148dbcec4a5d782dd87588801607ea7dfc8874ffee88ac6868/76a914f454b1fe5b95428d6beec58ed3131a6ea611b2fa8763ac672103f83ca95b22920e71487736a7284696dd52443fd8f7ce683153ac31d1d1db7da67c820120876475527c21026ebaa1d08757b86110e40e3f4a081803eec694e23ec75ee0bfd753589df896e752ae67a9148dbcec4a5d782dd87588801607ea7dfc8874ffee88ac6868 (version v0.7.1-57-gb3215a8)"
*/
#include "config.h"
#include <ccan/str/hex/hex.h>
#include <common/setup.h>
#include <stdio.h>

#define main test_main
int test_main(int argc, char *argv[]);
#include "../onchaind.c"
#undef main
#include "../onchaind_wiregen.c"
#include "wire/fromwire.c"
#include "wire/towire.c"

/* AUTOGENERATED MOCKS START */
/* Generated stub for commit_number_obscurer */
u64 commit_number_obscurer(const struct pubkey *opener_payment_basepoint UNNEEDED,
			   const struct pubkey *accepter_payment_basepoint UNNEEDED)
{ fprintf(stderr, "commit_number_obscurer called!\n"); abort(); }
/* Generated stub for daemon_shutdown */
void daemon_shutdown(void)
{ fprintf(stderr, "daemon_shutdown called!\n"); abort(); }
/* Generated stub for derive_keyset */
bool derive_keyset(const struct pubkey *per_commitment_point UNNEEDED,
		   const struct basepoints *self UNNEEDED,
		   const struct basepoints *other UNNEEDED,
		   bool option_static_remotekey UNNEEDED,
		   struct keyset *keyset UNNEEDED)
{ fprintf(stderr, "derive_keyset called!\n"); abort(); }
/* Generated stub for dump_memleak_ */
bool dump_memleak_(struct htable *memtable UNNEEDED,
		   void  (*print)(void *arg UNNEEDED, const char *fmt UNNEEDED, ...) UNNEEDED,
		   void *arg UNNEEDED)
{ fprintf(stderr, "dump_memleak_ called!\n"); abort(); }
/* Generated stub for fromwire_basepoints */
void fromwire_basepoints(const u8 **ptr UNNEEDED, size_t *max UNNEEDED,
			 struct basepoints *b UNNEEDED)
{ fprintf(stderr, "fromwire_basepoints called!\n"); abort(); }
/* Generated stub for fromwire_chain_coin_mvt */
void fromwire_chain_coin_mvt(const u8 **cursor UNNEEDED, size_t *max UNNEEDED, struct chain_coin_mvt *mvt UNNEEDED)
{ fprintf(stderr, "fromwire_chain_coin_mvt called!\n"); abort(); }
/* Generated stub for fromwire_hsmd_get_per_commitment_point_reply */
bool fromwire_hsmd_get_per_commitment_point_reply(const tal_t *ctx UNNEEDED, const void *p UNNEEDED, struct pubkey *per_commitment_point UNNEEDED, struct secret **old_commitment_secret UNNEEDED)
{ fprintf(stderr, "fromwire_hsmd_get_per_commitment_point_reply called!\n"); abort(); }
/* Generated stub for fromwire_htlc_stub */
void fromwire_htlc_stub(const u8 **cursor UNNEEDED, size_t *max UNNEEDED,
			struct htlc_stub *htlc_stub UNNEEDED)
{ fprintf(stderr, "fromwire_htlc_stub called!\n"); abort(); }
/* Generated stub for fromwire_shachain */
void fromwire_shachain(const u8 **cursor UNNEEDED, size_t *max UNNEEDED,
		       struct shachain *shachain UNNEEDED)
{ fprintf(stderr, "fromwire_shachain called!\n"); abort(); }
/* Generated stub for fromwire_side */
enum side fromwire_side(const u8 **cursor UNNEEDED, size_t *max UNNEEDED)
{ fprintf(stderr, "fromwire_side called!\n"); abort(); }
/* Generated stub for fromwire_wallet_tx_type */
enum wallet_tx_type fromwire_wallet_tx_type(const u8 **cursor UNNEEDED, size_t *max UNNEEDED)
{ fprintf(stderr, "fromwire_wallet_tx_type called!\n"); abort(); }
/* Generated stub for htlc_offered_wscript */
u8 *htlc_offered_wscript(const tal_t *ctx UNNEEDED,
			 const struct ripemd160 *ripemd UNNEEDED,
			 const struct keyset *keyset UNNEEDED,
			 bool option_anchor_outputs UNNEEDED,
			 bool option_anchors_zero_fee_htlc_tx UNNEEDED)
{ fprintf(stderr, "htlc_offered_wscript called!\n"); abort(); }
/* Generated stub for htlc_received_wscript */
u8 *htlc_received_wscript(const tal_t *ctx UNNEEDED,
			  const struct ripemd160 *ripemd UNNEEDED,
			  const struct abs_locktime *expiry UNNEEDED,
			  const struct keyset *keyset UNNEEDED,
			  bool option_anchor_outputs UNNEEDED,
			  bool option_anchors_zero_fee_htlc_tx UNNEEDED)
{ fprintf(stderr, "htlc_received_wscript called!\n"); abort(); }
/* Generated stub for htlc_success_tx */
struct bitcoin_tx *htlc_success_tx(const tal_t *ctx UNNEEDED,
				   const struct chainparams *chainparams UNNEEDED,
				   const struct bitcoin_outpoint *commit UNNEEDED,
				   const u8 *commit_wscript UNNEEDED,
				   struct amount_msat htlc_msatoshi UNNEEDED,
				   u16 to_self_delay UNNEEDED,
				   u32 feerate_per_kw UNNEEDED,
				   const struct keyset *keyset UNNEEDED,
				   bool option_anchor_outputs UNNEEDED,
				   bool option_anchors_zero_fee_htlc_tx UNNEEDED)
{ fprintf(stderr, "htlc_success_tx called!\n"); abort(); }
/* Generated stub for master_badmsg */
void master_badmsg(u32 type_expected UNNEEDED, const u8 *msg)
{ fprintf(stderr, "master_badmsg called!\n"); abort(); }
/* Generated stub for memleak_ptr */
bool memleak_ptr(struct htable *memtable UNNEEDED, const void *p UNNEEDED)
{ fprintf(stderr, "memleak_ptr called!\n"); abort(); }
/* Generated stub for memleak_scan_obj */
void memleak_scan_obj(struct htable *memtable UNNEEDED, const void *obj UNNEEDED)
{ fprintf(stderr, "memleak_scan_obj called!\n"); abort(); }
/* Generated stub for memleak_start */
struct htable *memleak_start(const tal_t *ctx UNNEEDED)
{ fprintf(stderr, "memleak_start called!\n"); abort(); }
/* Generated stub for memleak_status_broken */
void memleak_status_broken(void *unused UNNEEDED, const char *fmt UNNEEDED, ...)
{ fprintf(stderr, "memleak_status_broken called!\n"); abort(); }
/* Generated stub for new_coin_channel_close */
struct chain_coin_mvt *new_coin_channel_close(const tal_t *ctx UNNEEDED,
					      const struct bitcoin_txid *txid UNNEEDED,
					      const struct bitcoin_outpoint *out UNNEEDED,
					      u32 blockheight UNNEEDED,
					      const struct amount_msat amount UNNEEDED,
					      const struct amount_sat output_val UNNEEDED,
					      u32 output_count)

{ fprintf(stderr, "new_coin_channel_close called!\n"); abort(); }
/* Generated stub for new_coin_external_deposit */
struct chain_coin_mvt *new_coin_external_deposit(const tal_t *ctx UNNEEDED,
						 const struct bitcoin_outpoint *outpoint UNNEEDED,
						 u32 blockheight UNNEEDED,
						 struct amount_sat amount UNNEEDED,
						 enum mvt_tag tag)

{ fprintf(stderr, "new_coin_external_deposit called!\n"); abort(); }
/* Generated stub for new_coin_external_deposit_tags */
struct chain_coin_mvt *new_coin_external_deposit_tags(const tal_t *ctx UNNEEDED,
						      const struct bitcoin_outpoint *outpoint UNNEEDED,
						      u32 blockheight UNNEEDED,
						      struct amount_sat amount UNNEEDED,
						      enum mvt_tag *tags)

{ fprintf(stderr, "new_coin_external_deposit_tags called!\n"); abort(); }
/* Generated stub for new_coin_external_spend */
struct chain_coin_mvt *new_coin_external_spend(const tal_t *ctx UNNEEDED,
					       const struct bitcoin_outpoint *outpoint UNNEEDED,
					       const struct bitcoin_txid *txid UNNEEDED,
					       u32 blockheight UNNEEDED,
					       struct amount_sat amount UNNEEDED,
					       enum mvt_tag tag)

{ fprintf(stderr, "new_coin_external_spend called!\n"); abort(); }
/* Generated stub for new_coin_external_spend_tags */
struct chain_coin_mvt *new_coin_external_spend_tags(const tal_t *ctx UNNEEDED,
						    const struct bitcoin_outpoint *outpoint UNNEEDED,
						    const struct bitcoin_txid *txid UNNEEDED,
						    u32 blockheight UNNEEDED,
						    struct amount_sat amount UNNEEDED,
						    enum mvt_tag *tags)

{ fprintf(stderr, "new_coin_external_spend_tags called!\n"); abort(); }
/* Generated stub for new_coin_wallet_deposit_tagged */
struct chain_coin_mvt *new_coin_wallet_deposit_tagged(const tal_t *ctx UNNEEDED,
						      const struct bitcoin_outpoint *outpoint UNNEEDED,
						      u32 blockheight UNNEEDED,
						      struct amount_sat amount UNNEEDED,
						      enum mvt_tag *tags TAKES)

{ fprintf(stderr, "new_coin_wallet_deposit_tagged called!\n"); abort(); }
/* Generated stub for new_onchain_htlc_deposit */
struct chain_coin_mvt *new_onchain_htlc_deposit(const tal_t *ctx UNNEEDED,
						const struct bitcoin_outpoint *outpoint UNNEEDED,
						u32 blockheight UNNEEDED,
						struct amount_sat amount UNNEEDED,
						const struct sha256 *payment_hash)

{ fprintf(stderr, "new_onchain_htlc_deposit called!\n"); abort(); }
/* Generated stub for new_onchain_htlc_withdraw */
struct chain_coin_mvt *new_onchain_htlc_withdraw(const tal_t *ctx UNNEEDED,
						 const struct bitcoin_outpoint *outpoint UNNEEDED,
						 u32 blockheight UNNEEDED,
						 struct amount_sat amount UNNEEDED,
						 const struct sha256 *payment_hash)

{ fprintf(stderr, "new_onchain_htlc_withdraw called!\n"); abort(); }
/* Generated stub for new_onchaind_deposit */
struct chain_coin_mvt *new_onchaind_deposit(const tal_t *ctx UNNEEDED,
					    const struct bitcoin_outpoint *outpoint UNNEEDED,
					    u32 blockheight UNNEEDED,
					    struct amount_sat amount UNNEEDED,
					    enum mvt_tag tag)

{ fprintf(stderr, "new_onchaind_deposit called!\n"); abort(); }
/* Generated stub for new_onchaind_withdraw */
struct chain_coin_mvt *new_onchaind_withdraw(const tal_t *ctx UNNEEDED,
					     const struct bitcoin_outpoint *outpoint UNNEEDED,
					     const struct bitcoin_txid *spend_txid UNNEEDED,
					     u32 blockheight UNNEEDED,
					     struct amount_sat amount UNNEEDED,
					     enum mvt_tag tag)

{ fprintf(stderr, "new_onchaind_withdraw called!\n"); abort(); }
/* Generated stub for new_tag_arr */
enum mvt_tag *new_tag_arr(const tal_t *ctx UNNEEDED, enum mvt_tag tag UNNEEDED)
{ fprintf(stderr, "new_tag_arr called!\n"); abort(); }
/* Generated stub for notleak_ */
void *notleak_(void *ptr UNNEEDED, bool plus_children UNNEEDED)
{ fprintf(stderr, "notleak_ called!\n"); abort(); }
/* Generated stub for peer_billboard */
void peer_billboard(bool perm UNNEEDED, const char *fmt UNNEEDED, ...)
{ fprintf(stderr, "peer_billboard called!\n"); abort(); }
/* Generated stub for shachain_get_secret */
bool shachain_get_secret(const struct shachain *shachain UNNEEDED,
			 u64 commit_num UNNEEDED,
			 struct secret *preimage UNNEEDED)
{ fprintf(stderr, "shachain_get_secret called!\n"); abort(); }
/* Generated stub for status_failed */
void status_failed(enum status_failreason code UNNEEDED,
		   const char *fmt UNNEEDED, ...)
{ fprintf(stderr, "status_failed called!\n"); abort(); }
/* Generated stub for status_setup_sync */
void status_setup_sync(int fd UNNEEDED)
{ fprintf(stderr, "status_setup_sync called!\n"); abort(); }
/* Generated stub for subdaemon_setup */
bool subdaemon_setup(int argc UNNEEDED, char *argv[])
{ fprintf(stderr, "subdaemon_setup called!\n"); abort(); }
/* Generated stub for to_self_wscript */
u8 *to_self_wscript(const tal_t *ctx UNNEEDED,
		    u16 to_self_delay UNNEEDED,
		    u32 csv UNNEEDED,
		    const struct keyset *keyset UNNEEDED)
{ fprintf(stderr, "to_self_wscript called!\n"); abort(); }
/* Generated stub for towire_basepoints */
void towire_basepoints(u8 **pptr UNNEEDED, const struct basepoints *b UNNEEDED)
{ fprintf(stderr, "towire_basepoints called!\n"); abort(); }
/* Generated stub for towire_chain_coin_mvt */
void towire_chain_coin_mvt(u8 **pptr UNNEEDED, const struct chain_coin_mvt *mvt UNNEEDED)
{ fprintf(stderr, "towire_chain_coin_mvt called!\n"); abort(); }
/* Generated stub for towire_hsmd_get_per_commitment_point */
u8 *towire_hsmd_get_per_commitment_point(const tal_t *ctx UNNEEDED, u64 n UNNEEDED)
{ fprintf(stderr, "towire_hsmd_get_per_commitment_point called!\n"); abort(); }
/* Generated stub for towire_htlc_stub */
void towire_htlc_stub(u8 **pptr UNNEEDED, const struct htlc_stub *htlc_stub UNNEEDED)
{ fprintf(stderr, "towire_htlc_stub called!\n"); abort(); }
/* Generated stub for towire_shachain */
void towire_shachain(u8 **pptr UNNEEDED, const struct shachain *shachain UNNEEDED)
{ fprintf(stderr, "towire_shachain called!\n"); abort(); }
/* Generated stub for towire_side */
void towire_side(u8 **pptr UNNEEDED, const enum side side UNNEEDED)
{ fprintf(stderr, "towire_side called!\n"); abort(); }
/* Generated stub for towire_wallet_tx_type */
void towire_wallet_tx_type(u8 **pptr UNNEEDED, const enum wallet_tx_type type UNNEEDED)
{ fprintf(stderr, "towire_wallet_tx_type called!\n"); abort(); }
/* AUTOGENERATED MOCKS END */

/* Stubs which do get called. */
u8 *towire_hsmd_sign_local_htlc_tx(const tal_t *ctx UNNEEDED, u64 commit_num UNNEEDED, const struct bitcoin_tx *tx UNNEEDED, const u8 *wscript UNNEEDED, bool option_anchor_outputs UNNEEDED)
{
	return NULL;
}

u8 *wire_sync_read(const tal_t *ctx, int fd UNNEEDED)
{
	return towire_onchaind_spend_created(ctx, true, NULL);
}

bool wire_sync_write(int fd UNNEEDED, const void *msg TAKES)
{
	if (taken(msg))
		tal_free(msg);
	return true;
}

/* Generated stub for fromwire_hsmd_sign_tx_reply */
bool fromwire_hsmd_sign_tx_reply(const void *p UNNEEDED, struct bitcoin_signature *sig)
{
	memset(sig, 0, sizeof(*sig));
	return true;
}

void status_fmt(enum log_level level UNNEEDED,
		const struct node_id *node_id,
		const char *fmt UNNEEDED, ...)
{
}

static void signature_from_hex(const char *hex, struct bitcoin_signature *sig)
{
	u8 der[74];
	size_t len = hex_data_size(strlen(hex));

	sig->sighash_type = SIGHASH_ALL;
	assert(len < sizeof(der));
	if (!hex_decode(hex, strlen(hex), der, len))
		abort();

	if (!signature_from_der(der, len, sig))
		abort();
}

/* We don't have enough info to make this from first principles, but we have
 * an example tx, so just mangle that. */
struct bitcoin_tx *htlc_timeout_tx(const tal_t *ctx,
				   const struct chainparams *chainparams,
				   const struct bitcoin_outpoint *commit UNNEEDED,
				   const u8* commit_wscript,
				   struct amount_msat htlc_msatoshi,
				   u32 cltv_expiry,
				   u16 to_self_delay UNNEEDED,
				   u32 feerate_per_kw UNNEEDED,
				   const struct keyset *keyset UNNEEDED,
				   bool option_anchor_outputs,
				   bool option_anchors_zero_fee_htlc_tx)
{
 	struct bitcoin_tx *tx;
	struct amount_sat in_amount;

	tx = bitcoin_tx_from_hex(ctx, "0200000001a02a38c6ec5541963704a2a035b3094b18d69cc25cc7419d75e02894618329720000000000000000000191ea3000000000002200208bfadb3554f41cc06f00de0ec2e2f91e36ee45b5006a1f606146784755356ba532f10800",
				 strlen("0200000001a02a38c6ec5541963704a2a035b3094b18d69cc25cc7419d75e02894618329720000000000000000000191ea3000000000002200208bfadb3554f41cc06f00de0ec2e2f91e36ee45b5006a1f606146784755356ba532f10800"));
	assert(tx);

	in_amount = amount_msat_to_sat_round_down(htlc_msatoshi);
	psbt_input_set_wit_utxo(tx->psbt, 0,
				scriptpubkey_p2wsh(tx->psbt, commit_wscript),
				in_amount);
	psbt_input_set_witscript(tx->psbt, 0, commit_wscript);
	tx->chainparams = chainparams;

	bitcoin_tx_set_locktime(tx, cltv_expiry);
	return tx;
}

int main(int argc, char *argv[])
{
	struct bitcoin_signature remotesig;
	struct tracked_output *out;
	struct keyset *keys;
	size_t *matches;
	struct htlc_stub htlcs[3];
	u8 *htlc_scripts[3];

	common_setup(argv[0]);
	chainparams = chainparams_for_network("bitcoin");
	queued_msgs = tal_arr(tmpctx, const u8 *, 0);

	htlcs[0].cltv_expiry = 585998;
	htlcs[1].cltv_expiry = 585998;
	htlcs[2].cltv_expiry = 586034;
	htlcs[0].id = 0;
	htlcs[1].id = 0;
	htlcs[2].id = 0;
	htlc_scripts[0] = tal_hexdata(tmpctx, "76a914f454b1fe5b95428d6beec58ed3131a6ea611b2fa8763ac672103f83ca95b22920e71487736a7284696dd52443fd8f7ce683153ac31d1d1db7da67c820120876475527c21026ebaa1d08757b86110e40e3f4a081803eec694e23ec75ee0bfd753589df896e752ae67a9148dbcec4a5d782dd87588801607ea7dfc8874ffee88ac6868",
				      strlen("76a914f454b1fe5b95428d6beec58ed3131a6ea611b2fa8763ac672103f83ca95b22920e71487736a7284696dd52443fd8f7ce683153ac31d1d1db7da67c820120876475527c21026ebaa1d08757b86110e40e3f4a081803eec694e23ec75ee0bfd753589df896e752ae67a9148dbcec4a5d782dd87588801607ea7dfc8874ffee88ac6868"));
	htlc_scripts[1] = tal_hexdata(tmpctx, "76a914f454b1fe5b95428d6beec58ed3131a6ea611b2fa8763ac672103f83ca95b22920e71487736a7284696dd52443fd8f7ce683153ac31d1d1db7da67c820120876475527c21026ebaa1d08757b86110e40e3f4a081803eec694e23ec75ee0bfd753589df896e752ae67a9148dbcec4a5d782dd87588801607ea7dfc8874ffee88ac6868",
				      strlen("76a914f454b1fe5b95428d6beec58ed3131a6ea611b2fa8763ac672103f83ca95b22920e71487736a7284696dd52443fd8f7ce683153ac31d1d1db7da67c820120876475527c21026ebaa1d08757b86110e40e3f4a081803eec694e23ec75ee0bfd753589df896e752ae67a9148dbcec4a5d782dd87588801607ea7dfc8874ffee88ac6868"));
	htlc_scripts[2] = tal_hexdata(tmpctx, "76a914f454b1fe5b95428d6beec58ed3131a6ea611b2fa8763ac672103f83ca95b22920e71487736a7284696dd52443fd8f7ce683153ac31d1d1db7da67c820120876475527c21026ebaa1d08757b86110e40e3f4a081803eec694e23ec75ee0bfd753589df896e752ae67a9148dbcec4a5d782dd87588801607ea7dfc8874ffee88ac6868",
				 strlen("76a914f454b1fe5b95428d6beec58ed3131a6ea611b2fa8763ac672103f83ca95b22920e71487736a7284696dd52443fd8f7ce683153ac31d1d1db7da67c820120876475527c21026ebaa1d08757b86110e40e3f4a081803eec694e23ec75ee0bfd753589df896e752ae67a9148dbcec4a5d782dd87588801607ea7dfc8874ffee88ac6868"));

	/* talz keeps valgrind happy. */
	out = talz(tmpctx, struct tracked_output);
	bitcoin_txid_from_hex("722983619428e0759d41c75cc29cd6184b09b335a0a20437964155ecc6382aa0", strlen("722983619428e0759d41c75cc29cd6184b09b335a0a20437964155ecc6382aa0"), &out->outpoint.txid);
	out->outpoint.n = 0;
	if (!parse_amount_sat(&out->sat, "3215967sat", strlen("3215967sat")))
		abort();
	signature_from_hex("3045022100917efdc8577e8578aef5e513fad25edbb55921466e8ffccb05ce8bb05a54ae6902205c2fded9d7bfc290920821bfc828720bc24287f3dad9a62fb4f806e2404ed0f401", &remotesig);
	out->remote_htlc_sig = tal_dup(out, struct bitcoin_signature, &remotesig);

	/* Make mapping 1:1 for this */
	matches = tal_arr(tmpctx, size_t, 3);
	matches[0] = 0;
	matches[1] = 1;
	matches[2] = 2;

	keyset = keys = tal(tmpctx, struct keyset);
	if (!pubkey_from_hexstr("03f83ca95b22920e71487736a7284696dd52443fd8f7ce683153ac31d1d1db7da6",
				strlen("03f83ca95b22920e71487736a7284696dd52443fd8f7ce683153ac31d1d1db7da6"),
				&keys->other_htlc_key))
		abort();
	/* resolve_our_htlc_ourcommit wants these too; set to anything valid. */
	keys->self_revocation_key
		= keys->self_delayed_payment_key
		= keys->other_htlc_key;

	min_possible_feerate = 10992;
	max_possible_feerate = 15370;

	size_t ret = resolve_our_htlc_ourcommit(out,
						matches,
						htlcs,
						htlc_scripts);

	assert(ret == 2);
	common_shutdown();
}
