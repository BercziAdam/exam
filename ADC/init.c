/**
 * Write an ADC initializer function!
 * Assume that you want to measure the voltage on the PC3 pin,
 * you want to use the internal 1.1V as reference.
 * You also want to measure as slow as possible,
 * and you want to use the ADC interrupt.
 */
void ADC_init() {
    DDRC |= (0 << DDRC3);
    PINC|= (1 << PINC3);

    ADMUX = (0x3F & ADMUX);
    ADMUX |= (1 << REFS0)| (1 << REFS1)
    ADMUX = (0xF0 & ADMUX);

    ADCSRA = (0xF8 & ADMUX);
    ADCSRA |= (1 << ADIE);
    ADCSRA |= (1 << ADPS0)|(1 << ADPS1)|(1 << ADPS2);

    ADCSRA |= 1 << ADEN;
}
