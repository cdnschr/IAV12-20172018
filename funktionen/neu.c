for(i = 0; i < len2; i++){ // Entspricht mit Zeigern:
  s1[len1 + i] = s2[i];  //   *(s1+len1+i) = *(s2+i);
}
s1[len1+i] = '\0';        // *(s1+len1+i) = '\0';
