/*
 * Copyright Morse Micro 2021
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 */

#ifndef __DOT11AH_CHANNELS__
#define __DOT11AH_CHANNELS__

typedef struct {
	/*5G channel*/
	int channel;
	/*80211ah channel*/
	int halow_channel;
	/*80211ah freq*/
	float halow_freq;
	/*80211ah bandwidth*/
	int bw;
} channel_to_halow_freq_t;

typedef struct {
	char country[3];
	int num_mapped_channels;
	channel_to_halow_freq_t ah_vals[];
} country_channel_map_t;

const country_channel_map_t *set_s1g_channel_map(void);

#endif /* __DOT11AH_CHANNELS__ */
