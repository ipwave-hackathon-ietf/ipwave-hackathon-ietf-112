//
// Generated file, do not edit! Created by nedtool 5.4 from stack/mac/packet/LteMacSduRequest.msg.
//

#if defined(__clang__)
#  pragma clang diagnostic ignored "-Wreserved-id-macro"
#endif
#ifndef __LTEMACSDUREQUEST_M_H
#define __LTEMACSDUREQUEST_M_H

#include <omnetpp.h>

// nedtool version check
#define MSGC_VERSION 0x0504
#if (MSGC_VERSION!=OMNETPP_VERSION)
#    error Version mismatch! Probably this file was generated by an earlier version of nedtool: 'make clean' should help.
#endif



/**
 * Class generated from <tt>stack/mac/packet/LteMacSduRequest.msg:14</tt> by nedtool.
 * <pre>
 * //
 * // This is the message that asks the RLC layer for a new MAC SDU.
 * //
 * packet LteMacSduRequest
 * {
 *     \@customize(true);
 *     unsigned int sduSize;       // size of the requested SDU
 * }
 * </pre>
 *
 * LteMacSduRequest_Base is only useful if it gets subclassed, and LteMacSduRequest is derived from it.
 * The minimum code to be written for LteMacSduRequest is the following:
 *
 * <pre>
 * class LteMacSduRequest : public LteMacSduRequest_Base
 * {
 *   private:
 *     void copy(const LteMacSduRequest& other) { ... }

 *   public:
 *     LteMacSduRequest(const char *name=nullptr, short kind=0) : LteMacSduRequest_Base(name,kind) {}
 *     LteMacSduRequest(const LteMacSduRequest& other) : LteMacSduRequest_Base(other) {copy(other);}
 *     LteMacSduRequest& operator=(const LteMacSduRequest& other) {if (this==&other) return *this; LteMacSduRequest_Base::operator=(other); copy(other); return *this;}
 *     virtual LteMacSduRequest *dup() const override {return new LteMacSduRequest(*this);}
 *     // ADD CODE HERE to redefine and implement pure virtual functions from LteMacSduRequest_Base
 * };
 * </pre>
 *
 * The following should go into a .cc (.cpp) file:
 *
 * <pre>
 * Register_Class(LteMacSduRequest)
 * </pre>
 */
class LteMacSduRequest_Base : public ::omnetpp::cPacket
{
  protected:
    unsigned int sduSize;

  private:
    void copy(const LteMacSduRequest_Base& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const LteMacSduRequest_Base&);
    // make constructors protected to avoid instantiation
    LteMacSduRequest_Base(const char *name=nullptr, short kind=0);
    LteMacSduRequest_Base(const LteMacSduRequest_Base& other);
    // make assignment operator protected to force the user override it
    LteMacSduRequest_Base& operator=(const LteMacSduRequest_Base& other);

  public:
    virtual ~LteMacSduRequest_Base();
    virtual LteMacSduRequest_Base *dup() const override {throw omnetpp::cRuntimeError("You forgot to manually add a dup() function to class LteMacSduRequest");}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    // field getter/setter methods
    virtual unsigned int getSduSize() const;
    virtual void setSduSize(unsigned int sduSize);
};


#endif // ifndef __LTEMACSDUREQUEST_M_H

