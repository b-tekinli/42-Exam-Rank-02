unsigned char reverse_bits(unsigned char octet) {
  unsigned char result = 0;
    
  for (int i = 0; i < 8; i++) {
    result = (result << 1) | (octet & 1);
    octet >>= 1;
  }
  return result;
}
