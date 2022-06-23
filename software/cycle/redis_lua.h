/*
 * redis_lua.h
 *
 *  Created on: Jun 14, 2017
 *      Author: george
 */

#ifndef HEADER_REDIS_LUA_H_
#define HEADER_REDIS_LUA_H_

static unsigned char statsscript_lua[] = "local key, value = KEYS[1], tonumber(ARGV[1]); local values = redis.call('HMGET', key, 'min', 'max', 'mean', 'count', 'sumOfSquares', 'sum', 'alpha'); local min = math.min(value, tonumber(values[1])); local max = math.max(value, tonumber(values[2])); local mean = tonumber(values[3]); local count = tonumber(values[4]) + 1; local sumOfSquares = tonumber(values[5]) + value * value; local sum = tonumber(values[6]) + value; local alpha = tonumber(values[7]); local stddev = 0.0; local variance = 0.0; if(count > 1) then if(alpha == 0.0) then mean = mean + (value  - mean) / count; else mean = (alpha * value) + (1.0 - alpha) * mean; end; stddev = math.sqrt((count * sumOfSquares - sum * sum) / (count * (count -1))); variance = stddev * stddev; else mean = value; end; redis.call('HMSET', key, 'min', min, 'max', max, 'current', value, 'mean', mean, 'variance', variance, 'stddev', stddev, 'count', count, 'sum', sum, 'sumOfSquares', sumOfSquares); if(ARGV[2]=='get_stats') then return {'current', value, 'min', min, 'max', max, 'mean', mean, 'stddev', stddev, 'variance', variance, 'sum', sum, 'count', count, 'alpha', alpha}; end;";

// static unsigned int statsscript_lua_len = 1134;

static unsigned char statsscript_lua_SHA1[] = "40ac074530b90a340a4d5013052b0a40e3c4aa7f";

#endif /* HEADER_REDIS_LUA_H_ */
