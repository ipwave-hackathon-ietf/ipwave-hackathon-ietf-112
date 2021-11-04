//
// Generated file, do not edit! Created by nedtool 5.4 from stack/rlc/packet/LteRlcSdu.msg.
//

#if defined(__clang__)
#  pragma clang diagnostic ignored "-Wreserved-id-macro"
#endif
#ifndef __LTERLCSDU_M_H
#define __LTERLCSDU_M_H

#include <omnetpp.h>

// nedtool version check
#define MSGC_VERSION 0x0504
#if (MSGC_VERSION!=OMNETPP_VERSION)
#    error Version mismatch! Probably this file was generated by an earlier version of nedtool: 'make clean' should help.
#endif



/**
 * Class generated from <tt>stack/rlc/packet/LteRlcSdu.msg:16</tt> by nedtool.
 * <pre>
 * //
 * // This is the RLC message flowing through LTE stack.
 * // The relevant field is the Main Packet Sequence Number
 * //
 * packet LteRlcSdu
 * {
 *     \@customize(true);
 *     unsigned int snoMainPacket;                        // ID of packet (sequence number)
 *     unsigned int lengthMainPacket;
 * }
 * </pre>
 *
 * LteRlcSdu_Base is only useful if it gets subclassed, and LteRlcSdu is derived from it.
 * The minimum code to be written for LteRlcSdu is the following:
 *
 * <pre>
 * class LteRlcSdu : public LteRlcSdu_Base
 * {
 *   private:
 *     void copy(const LteRlcSdu& other) { ... }

 *   public:
 *     LteRlcSdu(const char *name=nullptr, short kind=0) : LteRlcSdu_Base(name,kind) {}
 *     LteRlcSdu(const LteRlcSdu& other) : LteRlcSdu_Base(other) {copy(other);}
 *     LteRlcSdu& operator=(const LteRlcSdu& other) {if (this==&other) return *this; LteRlcSdu_Base::operator=(other); copy(other); return *this;}
 *     virtual LteRlcSdu *dup() const override {return new LteRlcSdu(*this);}
 *     // ADD CODE HERE to redefine and implement pure virtual functions from LteRlcSdu_Base
 * };
 * </pre>
 *
 * The following should go into a .cc (.cpp) file:
 *
 * <pre>
 * Register_Class(LteRlcSdu)
 * </pre>
 */
class LteRlcSdu_Base : public ::omnetpp::cPacket
{
  protected:
    unsigned int snoMainPacket;
    unsigned int lengthMainPacket;

  private:
    void copy(const LteRlcSdu_Base& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const LteRlcSdu_Base&);
    // make constructors protected to avoid instantiation
    LteRlcSdu_Base(const char *name=nullptr, short kind=0);
    LteRlcSdu_Base(const LteRlcSdu_Base& other);
    // make assignment operator protected to force the user override it
    LteRlcSdu_Base& operator=(const LteRlcSdu_Base& other);

  public:
    virtual ~LteRlcSdu_Base();
    virtual LteRlcSdu_Base *dup() const override {throw omnetpp::cRuntimeError("You forgot to manually add a dup() function to class LteRlcSdu");}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    // field getter/setter methods
    virtual unsigned int getSnoMainPacket() const;
    virtual void setSnoMainPacket(unsigned int snoMainPacket);
    virtual unsigned int getLengthMainPacket() const;
    virtual void setLengthMainPacket(unsigned int lengthMainPacket);
};


#endif // ifndef __LTERLCSDU_M_H

