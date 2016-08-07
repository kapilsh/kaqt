package kaqt.apps.ttmktdata;

import java.io.BufferedReader;
import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.IOException;
import java.io.InputStream;
import java.io.InputStreamReader;
import java.util.Properties;

import org.apache.log4j.Logger;
import org.apache.log4j.PropertyConfigurator;

import kaqt.mktdata.tt.TTMktDataRouter;

public class TTMktDataServer
{
	private static Logger logger = Logger.getLogger(TTMktDataServer.class);

	public static void main(String[] args)
	{
		// PropertyConfigurator.configure("log4j.properties");

		logger.info("LOADING CONFIGURATION AND INITIALIZING PROPERTIES");

		Properties properties = new Properties();
		InputStream input = null;

		TTMktDataRouter communicator = null;

		try
		{
			input = new FileInputStream("config.properties");
		}
		catch (FileNotFoundException e1)
		{
			e1.printStackTrace();
		}

		if (input != null)
		{
			try
			{
				properties.load(input);
				logger.info(String.format("LOADED %s PROPERTIES", properties.size()));
				communicator = new TTMktDataRouter(properties);
				communicator.initialize();

				logger.info("COMMUNICATOR STARTED");
			}
			catch (IOException e)
			{
				// TODO Auto-generated catch block
				e.printStackTrace();
			}
		}

		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		String exitInput = "";
		try
		{
			do
			{
				exitInput = br.readLine();
			}
			while (!exitInput.equals("q"));
		}
		catch (IOException e)
		{
			e.printStackTrace();
		}

		logger.info("RECEIVED EXIT SIGNAL");

		communicator.shutdown();

		logger.info("COMMUNICATOR SHUTDOWN and EXITING");
	}
}
