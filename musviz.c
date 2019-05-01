
#define BANDS_COUNT 256
#define STRIP_LENGTH 144

struct ffd_frame_data
{
	uint32_t bands[BANDS_COUNT];
};


struct rgb_data
{
	uint8_t red;
	uint8_t green;
	uint8_t blue;
};

struct hsv_data
{
	uint8_t hue;
	uint8_t saturation;
	uint16_t value;
};

struct rgb_strip_data
{
	uint32_t size;
	rgb_data strip[STRIP_LENGTH];
};

void calc_effect(ffd_frame_data *frame_data, rgb_strip_data* strip_data)
{
	if(frame_data == NULL)
		return;
	if(strip_data == NULL)
		return;

	hsv_data hsv_val;

	uint8

} 


