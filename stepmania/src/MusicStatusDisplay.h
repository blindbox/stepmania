#ifndef MUSICSTATUSDISPLAY_H
#define MUSICSTATUSDISPLAY_H
/*
-----------------------------------------------------------------------------
 Class: MusicStatusDisplay

 Desc: A little graphic to the left of the song's text banner in the MusicWheel.

 Copyright (c) 2001-2002 by the person(s) listed below.  All rights reserved.
	Chris Danford
-----------------------------------------------------------------------------
*/


#include "Sprite.h"



class MusicStatusDisplay : public Sprite
{
public:
	MusicStatusDisplay();

	enum Type { none, easy, crown1, crown2, crown3, edits };
	void SetType( Type type );

	virtual void Update( float fDeltaTime );
	virtual void DrawPrimitives();

protected:
	Type m_type;
};

#endif
