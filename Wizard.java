import java.util.*; // imported library
class red { // Class Declaration
	private static String seq; // Sequence declaration
	private static float apolar; // Apolar number declaration
	private static float polar; // polar number declaration
	private static float keto; // ketogenic number declaration
	private static float gluco; // glucogenic number declaration
	private static float amfi; // amfigenic number declaration
	private static float sayian; // Charged number declaration
	private static void ps(String x) { // private method declaration
		System.out.println(x); // method's action
	} // End of method
	public static void input() { // input reader declaration
		ps("Enter your sequence:"); // Output;
		Scanner inn = new Scanner(System.in); // Scanner class instance declared
		seq = inn.nextLine(); // instance method;
		inn.close(); // Instance closing;
	} // End of method
	public static void processing() { // processing step declaration
		input(); // input method call
		char npa[] = { // Array of non-polar Aminoacids
				'A','I','L','M','F','V','P','G' // Array contents;
		}; // End of Array
		char pa[] = {'Q','N','H','S','T','Y','C','W'}; // Array of polar amino acids
		char ket[] = {'L','K'}; // Array of ketogenic aminoacids
		char amf[] = {'I','F','T','W','Y'}; // Array of amfigenic aminoacids
		char gluc[] = {'A','R','N','D','C','E','Q','Z','G','H','M','P','S','V'}; // Glugenic aminoacids
		char charged[] = {'R','K','D','E'}; // Array of charged aminoacids
		char is[] = seq.toCharArray(); // String class instance declared
		sayian = 0; // counter declared
		for(int x = 0;x<=is.length - 1;x++){ // Iterator declared
			if((is[x] == charged[0]) || // Chain of logical sub-steps
					(is[x] == charged[1]) || //*
					(is[x] == charged[2]) || //*
					(is[x] == charged[3])) { //*
						sayian++; // counter incrementation	
						} // end of conditional iteration
		} // End of iteration
		polar = 0;
		for(int x = 0;x<= is.length - 1;x++) { // Iterator declared
			if((is[x] == pa[0]) || // Chain of logic sub-steps
					(is[x] == pa[1]) || //*
					(is[x] == pa[2]) || // *
					(is[x] == pa[3]) || // *
					(is[x] == pa[4]) || //*
					(is[x] == pa[5]) ||//*
					(is[x] == pa[6]) ||//*
					(is[x] == pa[7])) { //*
				polar++; // Counter incrementation
			} // End of conditional iteration
		} // End of iteration
		apolar = 0; // Counter declared
		for(int x = 0;x<=is.length - 1; x++) { // Iterator declared
			if((is[x] == npa[0]) || // Chain of logical sub-steps
				is[x] == npa[1] || //*
				is[x] == npa[2] ||//*
				is[x] == npa[3] ||//*
				is[x] == npa[4] ||//*
				is[x] == npa[5] ||//*
				is[x] == npa[6] ||//*
				is[x] == npa[7]//*
				) {//*
				apolar++;//*
			} // End of conditional iteration
		} // End of iteration
		keto = 0; // Counter Declared
		for(int x = 0;x<=is.length - 1;x++) { // Iterator declared
			if((is[x] == ket[0]) || // Logical iteration
				is[x] == ket[1]) {
				keto++; // Counter incrementation
			} // End of logical iteration
		} // End of iteration
		amfi = 0; // Counter declared
		for(int x = 0;x<=is.length - 1;x++) { // Iterator declared
			if((is[x] == amf[0]) || // logical iteration declared
				is[x] == amf[1] || // *
				is[x] == amf[2] || //*
				is[x] == amf[3] || //*
				is[x] == amf[4]) {
				amfi++; // Counter incrementing
			} // End of logical iteration
		} // End of iteration
		gluco = 0; // Counter declared
		for(int x = 0;x<=is.length - 1;x++) { // Iterator declared
			if((is[x] == gluc[0]) || // Chain of logical sub-steps
				is[x] == gluc[1] ||//*
				is[x] == gluc[2] ||//*
				is[x] == gluc[3] ||//*
				is[x] == gluc[4] ||//*
				is[x] == gluc[5] ||//*
				is[x] == gluc[6] ||//*
				is[x] == gluc[7] ||//*
				is[x] == gluc[8] ||//*
				is[x] == gluc[9] ||//*
				is[x] == gluc[10] ||//*
				is[x] == gluc[11] ||//*
				is[x] == gluc[12] ||//*
				is[x] == gluc[13]){//*
				gluco++; // Counter incrementing
			} // End of logical iteration
		} // End of Iteration
	} // End of processing method
	red(){ // Class constructor declared
		processing(); // Processing method call
		float pvp = (polar/seq.length())*100; // Value definition
		float pva = (apolar/seq.length())*100; //*
		float pvk = (keto/seq.length())*100;//*
		float pvg = (gluco/seq.length())*100;//*
		float pvam = (amfi/seq.length())*100;//*
		float pvch = (sayian/seq.length())*100; //*
		ps("Polar(%): " + pvp);// Output (Polar aminoacids)
		ps("Apolar(%): " + pva);// Output (Apolar aminoacids)
		ps("Ketogenic(%): " + pvk);// Output (Ketogenic aminoacids)
		ps("Glucogenic(%): " + pvg);// Output (Glucogenic aminoacids)
		ps("Amfigenic(%): " + pvam);// Output (Ammfigenic aminoacids)
		ps("Charged(%): "+ pvch); // Output (Charged aminoacids)
		} // End of constructor
}//End of red Class
public class Wizard { // Main class declared
	public static void main(String[] args) { // Main method declared
		new red(); // New instance of red class created
	}
}
