#pragma comment(user, "license")

#pragma once

#ifndef OBERHEIM_VARIATION_LADDER_H
#define OBERHEIM_VARIATION_LADDER_H

#include "LadderFilterBase.h"

// https://books.google.com/books?id=oaYgBQAAQBAJ&pg=PA358&lpg=PA358&dq=%22CMoogLadderFilter%22&source=bl&ots=61_I_0V7d7&sig=4u_IaJG5E7RfqxYHDMWu6T0bXUI&hl=en&sa=X&ei=AtebVdK1H4u0oQSvn5uoDg&ved=0CB4Q6AEwAA#v=onepage&q=%22CMoogLadderFilter%22&f=false
// https://github.com/yourivoet/RaveMachine/blob/1e8042c8dfa4a31721c76557a8accc287d92fdf1/RaveMachine2/MoogLadderFilter.h
// http://www.willpirkle.com/Downloads/AN-8MoogHalfLadderFilter.pdf
// http://www.willpirkle.com/fx-book/project-gallery/ => MoogLPF Project

class OberheimVariationMoog : public LadderFilterBase
{
    
public:
    
    OberheimVariationMoog(float sampleRate) : LadderFilterBase(sampleRate)
    {
    }
    
    virtual ~OberheimVariationMoog()
    {
    }
    
    virtual void Process(float * samples, uint32_t n) noexcept override
    {
    }
    
    virtual void SetResonance(float r) override
    {
    }
    
    virtual void SetCutoff(float c) override
    {
    }
    
private:
    
};

#endif