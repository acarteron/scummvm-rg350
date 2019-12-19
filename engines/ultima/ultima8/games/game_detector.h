/* ScummVM - Graphic Adventure Engine
 *
 * ScummVM is the legal property of its developers, whose names
 * are too numerous to list here. Please refer to the COPYRIGHT
 * file distributed with this source distribution.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.
 *
 */

#ifndef ULTIMA8_GAMES_GAMEDETECTOR_H
#define ULTIMA8_GAMES_GAMEDETECTOR_H

namespace Ultima {
namespace Ultima8 {

struct GameInfo;

class GameDetector {
public:
	//! try to detect type, version and language of game
	//! \param path Path where game is located
	//! \param gameinfo GameInfo struct to store data in
	//! \return true if detected succesfully
	static bool detect(std::string path, GameInfo *gameinfo);
};

} // End of namespace Ultima8
} // End of namespace Ultima

#endif